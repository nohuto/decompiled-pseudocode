/*
 * XREFs of SeCaptureObjectTypeList @ 0x14008DC20
 * Callers:
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureObjectTypeList(unsigned __int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  int v7; // edi
  char *PoolWithTag; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int16 v14; // r8
  char *v15; // r10
  _OWORD *v16; // r9
  char *v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+30h] [rbp-58h]
  _QWORD v20[4]; // [rsp+38h] [rbp-50h]

  v20[0] = a4;
  v7 = 0;
  PoolWithTag = 0LL;
  *(_QWORD *)v20[0] = 0LL;
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
      v18 = PoolWithTag;
      if ( PoolWithTag )
      {
        v11 = 0LL;
        v19 = 0;
        while ( (unsigned int)v11 < a2 )
        {
          v12 = (unsigned int)v11;
          v13 = 2 * v11;
          v14 = *(_WORD *)(a1 + 8 * v13);
          if ( v14 > 4u )
            goto LABEL_26;
          v15 = &PoolWithTag[48 * v12];
          *(_WORD *)v15 = v14;
          *((_WORD *)v15 + 1) = 0;
          v16 = *(_OWORD **)(a1 + 8 * v13 + 8);
          if ( ((unsigned __int8)v16 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)(v15 + 4) = *v16;
          *((_QWORD *)v15 + 3) = 0LL;
          *((_DWORD *)v15 + 8) = 0;
          *((_QWORD *)v15 + 5) = 0LL;
          if ( v19 )
          {
            PoolWithTag = v18;
            if ( v14 > *(unsigned __int16 *)&v18[48 * (v19 - 1)] + 1 || !v14 )
              goto LABEL_26;
            *((_DWORD *)v15 + 5) = *((_DWORD *)v20 + v14 + 1);
          }
          else
          {
            if ( v14 )
            {
              v7 = -1073741811;
              PoolWithTag = v18;
              break;
            }
            *((_DWORD *)v15 + 5) = -1;
            PoolWithTag = v18;
          }
          *((_DWORD *)&v20[1] + v14) = v19;
          v11 = (unsigned int)++v19;
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
LABEL_26:
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
