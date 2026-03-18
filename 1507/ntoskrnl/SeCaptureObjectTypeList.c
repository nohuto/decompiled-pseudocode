/*
 * XREFs of SeCaptureObjectTypeList @ 0x1400CE500
 * Callers:
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureObjectTypeList(unsigned __int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  int v7; // ebx
  char *PoolWithTag; // r10
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned __int16 v12; // r8
  char *v13; // r9
  _OWORD *v14; // rdx
  char *v16; // [rsp+28h] [rbp-60h]
  int v17; // [rsp+30h] [rbp-58h]
  _QWORD v18[4]; // [rsp+38h] [rbp-50h]

  HIDWORD(v18[0]) = HIDWORD(a4);
  v7 = 0;
  PoolWithTag = 0LL;
  *a4 = 0LL;
  if ( a3 != 1 )
    return 3221225474LL;
  if ( a2 )
  {
    if ( a1 && a2 < -(__int64)MmSystemRangeStart / 0x30uLL )
    {
      v9 = 16LL * a2;
      if ( v9 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = v9 + a1;
        if ( v9 + a1 > MmUserProbeAddress || v10 < a1 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 48LL * a2, 0x744F6553u);
      v16 = PoolWithTag;
      if ( PoolWithTag )
      {
        v11 = 0;
        v17 = 0;
        while ( v11 < a2 )
        {
          v12 = *(_WORD *)(a1 + 16LL * v11);
          if ( v12 > 4u )
            goto LABEL_24;
          v13 = &PoolWithTag[48 * v11];
          *(_WORD *)v13 = v12;
          *((_WORD *)v13 + 1) = 0;
          v14 = *(_OWORD **)(a1 + 16LL * v11 + 8);
          if ( ((unsigned __int8)v14 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)(v13 + 4) = *v14;
          *((_QWORD *)v13 + 3) = 0LL;
          *((_DWORD *)v13 + 8) = 0;
          *((_QWORD *)v13 + 5) = 0LL;
          if ( v17 )
          {
            PoolWithTag = v16;
            if ( v12 > *(unsigned __int16 *)&v16[48 * (v17 - 1)] + 1 || !v12 )
              goto LABEL_24;
            *((_DWORD *)v13 + 5) = *((_DWORD *)v18 + v12 + 1);
          }
          else
          {
            if ( v12 )
            {
              v7 = -1073741811;
              PoolWithTag = v16;
              break;
            }
            *((_DWORD *)v13 + 5) = -1;
            PoolWithTag = v16;
          }
          *((_DWORD *)&v18[1] + v12) = v17;
          v11 = ++v17;
          v7 = 0;
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
LABEL_24:
      v7 = -1073741811;
    }
  }
  if ( v7 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    *a4 = PoolWithTag;
  }
  return (unsigned int)v7;
}
