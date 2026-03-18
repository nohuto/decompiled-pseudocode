/*
 * XREFs of PiDevCfgGetKeySecurityDescriptor @ 0x140686DE0
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlLengthSid @ 0x1400CE984 (RtlLengthSid.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     ZwQuerySecurityObject @ 0x140181830 (ZwQuerySecurityObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlGetControlSecurityDescriptor @ 0x1405575CC (RtlGetControlSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1405B5F04 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall PiDevCfgGetKeySecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  NTSTATUS ControlSecurityDescriptor; // ebx
  PVOID PoolWithTag; // rdi
  PSID v6; // rbx
  ULONG v7; // esi
  NTSTATUS v8; // eax
  WORD Control; // [rsp+68h] [rbp+38h] BYREF
  ULONG Length; // [rsp+70h] [rbp+40h] BYREF
  PSID Revision; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  ControlSecurityDescriptor = ZwQuerySecurityObject(Handle, 6u, 0LL, 0, &Length);
  if ( (int)(ControlSecurityDescriptor + 0x80000000) < 0 || ControlSecurityDescriptor == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x63647050u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    ControlSecurityDescriptor = ZwQuerySecurityObject(Handle, 6u, PoolWithTag, Length, &Length);
    if ( ControlSecurityDescriptor >= 0 )
    {
      ControlSecurityDescriptor = RtlGetControlSecurityDescriptor(PoolWithTag, &Control, (PULONG)&Revision);
      if ( ControlSecurityDescriptor >= 0 )
      {
        if ( (Control & 4) != 0 )
        {
          ControlSecurityDescriptor = RtlGetGroupSecurityDescriptor(PoolWithTag, &Revision, (PBOOLEAN)&Control);
          if ( ControlSecurityDescriptor >= 0 )
          {
            v6 = Revision;
            if ( Revision )
            {
              v7 = RtlLengthSid(Revision);
              Length = v7;
              if ( v7 == RtlLengthSid(PiDevCfgNullSid) && !memcmp(v6, PiDevCfgNullSid, v7) )
              {
                v8 = ZwQuerySecurityObject(Handle, 4u, PoolWithTag, v7, &Length);
                ControlSecurityDescriptor = v8;
                if ( v8 == -1073741789 )
                {
                  ExFreePoolWithTag(PoolWithTag, 0);
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x63647050u);
                  if ( !PoolWithTag )
                    return (unsigned int)-1073741670;
                  v8 = ZwQuerySecurityObject(Handle, 4u, PoolWithTag, Length, &Length);
                  ControlSecurityDescriptor = v8;
                }
                if ( v8 >= 0 )
                {
                  *a2 = PoolWithTag;
                  return (unsigned int)ControlSecurityDescriptor;
                }
              }
              else
              {
                ControlSecurityDescriptor = -1073741720;
              }
            }
            else
            {
              ControlSecurityDescriptor = -1073741722;
            }
          }
        }
        else
        {
          ControlSecurityDescriptor = -1073741275;
        }
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)ControlSecurityDescriptor;
}
