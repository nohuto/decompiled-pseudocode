/*
 * XREFs of SeCaptureObjectTypeList @ 0x140060ACC
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureObjectTypeList(unsigned __int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  int v7; // ebx
  char *PoolWithTag; // r10
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned __int16 v11; // r8
  char *v12; // r9
  _OWORD *v13; // rdx
  int v15; // [rsp+24h] [rbp-64h]
  char *v16; // [rsp+28h] [rbp-60h]
  _DWORD v17[6]; // [rsp+38h] [rbp-50h]

  v7 = 0;
  PoolWithTag = 0LL;
  *a4 = 0LL;
  if ( a3 != 1 )
    return 3221225474LL;
  if ( a2 )
  {
    if ( a1 )
    {
      v9 = 16LL * a2;
      if ( v9 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 + a1 > 0x7FFFFFFF0000LL || v9 + a1 < a1 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 48LL * a2, 0x744F6553u);
      v16 = PoolWithTag;
      if ( PoolWithTag )
      {
        v10 = 0;
        v15 = 0;
        while ( v10 < a2 )
        {
          v11 = *(_WORD *)(a1 + 16LL * v10);
          if ( v11 > 4u )
            goto LABEL_17;
          v12 = &PoolWithTag[48 * v10];
          *(_WORD *)v12 = v11;
          *((_WORD *)v12 + 1) = 0;
          v13 = *(_OWORD **)(a1 + 16LL * v10 + 8);
          if ( ((unsigned __int8)v13 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)(v12 + 4) = *v13;
          *((_QWORD *)v12 + 3) = 0LL;
          *((_DWORD *)v12 + 8) = 0;
          *((_QWORD *)v12 + 5) = 0LL;
          if ( v15 )
          {
            PoolWithTag = v16;
            if ( v11 > *(unsigned __int16 *)&v16[48 * (v15 - 1)] + 1 || !v11 )
              goto LABEL_17;
            *((_DWORD *)v12 + 5) = v17[v11 - 1];
          }
          else
          {
            if ( v11 )
            {
              v7 = -1073741811;
              PoolWithTag = v16;
              break;
            }
            *((_DWORD *)v12 + 5) = -1;
            PoolWithTag = v16;
          }
          v17[v11] = v15;
          v10 = ++v15;
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
LABEL_17:
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
