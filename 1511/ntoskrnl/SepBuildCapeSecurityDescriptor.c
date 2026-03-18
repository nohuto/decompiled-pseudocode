/*
 * XREFs of SepBuildCapeSecurityDescriptor @ 0x1402005BC
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1403C0948 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 */

int __fastcall SepBuildCapeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, unsigned __int8 *a2, ACL *a3)
{
  int result; // eax
  __int16 v7; // ax
  ACL *v8; // r8
  __int64 v9; // rax

  result = RtlCreateSecurityDescriptor(SecurityDescriptor, *a2);
  if ( result >= 0 )
  {
    *((_WORD *)SecurityDescriptor + 1) |= 3u;
    v7 = *((_WORD *)a2 + 1);
    if ( (v7 & 4) == 0 )
    {
LABEL_3:
      v8 = 0LL;
      goto LABEL_8;
    }
    if ( v7 >= 0 )
    {
      v8 = (ACL *)*((_QWORD *)a2 + 4);
    }
    else
    {
      v9 = *((unsigned int *)a2 + 4);
      if ( !(_DWORD)v9 )
        goto LABEL_3;
      v8 = (ACL *)&a2[v9];
    }
LABEL_8:
    result = RtlSetDaclSecurityDescriptor(
               SecurityDescriptor,
               (*((_WORD *)a2 + 1) & 4) != 0,
               v8,
               (*((_WORD *)a2 + 1) & 8) != 0);
    if ( result >= 0 )
      return RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, a3, 0);
  }
  return result;
}
