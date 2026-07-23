/*
 * XREFs of PnpCheckDeviceIdsChanged @ 0x140511D78
 * Callers:
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     RtlCompareUnicodeStrings @ 0x140511FA0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall PnpCheckDeviceIdsChanged(
        __int64 a1,
        void *a2,
        const WCHAR *a3,
        int a4,
        SIZE_T NumberOfBytes,
        _BYTE *a6)
{
  bool v6; // cf
  _BYTE *v8; // rsi
  HANDLE v9; // r14
  int v10; // r15d
  PVOID PoolWithTag; // r12
  int DeviceRegProp; // edi
  const WCHAR *v14; // r15
  const WCHAR *v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+48h] [rbp-8h]
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF
  int v28; // [rsp+A8h] [rbp+58h]

  v28 = a4;
  v6 = (_BYTE)NumberOfBytes != 0;
  LOBYTE(NumberOfBytes) = -(char)NumberOfBytes;
  v8 = a6;
  v9 = a2;
  v10 = -v6;
  Handle = 0LL;
  *a6 = 0;
  if ( !a2 )
  {
    DeviceRegProp = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(a1 + 48),
                      0x10u,
                      0,
                      983103,
                      0,
                      (__int64)&Handle,
                      0LL);
    if ( DeviceRegProp < 0 )
      goto LABEL_22;
    v9 = Handle;
  }
  LODWORD(NumberOfBytes) = 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x75737050u);
  if ( PoolWithTag )
  {
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(a1 + 48),
                      (__int64)v9,
                      v10 + 3,
                      (__int64)&a6,
                      (__int64)PoolWithTag,
                      (__int64)&NumberOfBytes,
                      0);
    if ( DeviceRegProp != -1073741789 )
      goto LABEL_4;
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x75737050u);
    if ( PoolWithTag )
    {
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        *(_QWORD *)(a1 + 48),
                        (__int64)v9,
                        v10 + 3,
                        (__int64)&a6,
                        (__int64)PoolWithTag,
                        (__int64)&NumberOfBytes,
                        0);
LABEL_4:
      if ( DeviceRegProp < 0 )
      {
        if ( DeviceRegProp == -1073741275 )
        {
          DeviceRegProp = 0;
          if ( a3 )
          {
            for ( *v8 = 1; *a3; a3 += v24 + 1 )
            {
              v24 = -1LL;
              do
                ++v24;
              while ( a3[v24] );
            }
          }
        }
      }
      else if ( (_DWORD)a6 == 7 )
      {
        if ( a3 && v28 == (_DWORD)NumberOfBytes )
        {
          v14 = a3;
          v15 = (const WCHAR *)PoolWithTag;
          if ( *a3 )
          {
            while ( *v15 )
            {
              v16 = -1LL;
              do
                ++v16;
              while ( v14[v16] );
              v17 = v16 + 1;
              v18 = -1LL;
              do
                ++v18;
              while ( v15[v18] );
              v19 = (unsigned int)(v18 + 1);
              if ( v17 != (_DWORD)v19
                || (v25 = v17, v26 = v19, RtlCompareUnicodeStrings(v14, v17, v15, (unsigned int)v19, 1u)) )
              {
                *v8 = 1;
                break;
              }
              v14 += v25;
              v15 += v26;
              if ( !*v14 )
                break;
            }
          }
          if ( !*v8 )
          {
            if ( *v14 || *v15 )
              *v8 = 1;
            if ( !*v8 )
              goto LABEL_21;
          }
        }
        else
        {
          *v8 = 1;
        }
        v21 = (char *)PoolWithTag;
        if ( (_DWORD)NumberOfBytes )
        {
          do
          {
            if ( !*(_WORD *)v21 )
              break;
            v22 = -1LL;
            do
              ++v22;
            while ( *(_WORD *)&v21[2 * v22] );
            v21 += 2 * v22 + 2;
          }
          while ( 2 * ((v21 - (_BYTE *)PoolWithTag) >> 1) < (unsigned __int64)(unsigned int)NumberOfBytes );
        }
        if ( a3 )
        {
          while ( *a3 )
          {
            v23 = -1LL;
            do
              ++v23;
            while ( a3[v23] );
            a3 += v23 + 1;
          }
        }
      }
      else
      {
        DeviceRegProp = -1073741823;
      }
LABEL_21:
      ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_22;
    }
  }
  DeviceRegProp = -1073741670;
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceRegProp;
}
