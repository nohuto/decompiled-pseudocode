/*
 * XREFs of RequestPendingCompletion @ 0x1C0001148
 * Callers:
 *     NVMeHwInterrupt @ 0x1C0002230 (NVMeHwInterrupt.c)
 *     NVMeHwMSIInterrupt @ 0x1C0002280 (NVMeHwMSIInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CD2C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RequestPendingCompletion(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rbx
  _WORD *v4; // rdx
  __int16 v5; // ax
  bool v6; // r15
  __int16 v7; // r13
  unsigned __int16 v8; // r12
  unsigned __int16 v9; // cx
  __int64 v10; // rax
  __int16 v11; // ax
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int16 v14; // ax
  __int64 v15; // r14
  unsigned int v16; // edx
  __int64 v17; // r14
  __int64 v19; // [rsp+20h] [rbp-38h]
  unsigned __int16 v20; // [rsp+68h] [rbp+10h]
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 != 0xFFFF )
  {
    if ( a2 )
      v3 = *(_QWORD *)(a1 + 544) + 168LL * (a2 - 1);
    else
      v3 = a1 + 368;
    v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 98));
    v5 = v4[7] & 1;
    v6 = v5 != *(_WORD *)(v3 + 100);
    if ( v5 == *(_WORD *)(v3 + 100) )
      return v6;
    goto LABEL_6;
  }
  v3 = a1 + 368;
  v4 = (_WORD *)(*(_QWORD *)(a1 + 368) + 16LL * *(unsigned __int16 *)(a1 + 466));
  v11 = v4[7] & 1;
  v6 = v11 != *(_WORD *)(a1 + 468);
  if ( v11 != *(_WORD *)(a1 + 468) )
  {
LABEL_6:
    if ( (*(_DWORD *)(a1 + 88) & 2) != 0 )
    {
      v7 = *(_WORD *)(v3 + 100);
      v8 = *(_WORD *)(v3 + 98);
      if ( (v4[7] & 1) != v7 )
      {
LABEL_8:
        v9 = v4[5];
        if ( !*(_WORD *)(v3 + 96) || (*(_DWORD *)(a1 + 20) & 1) != 0 )
        {
          if ( v9 )
          {
            v20 = *(_WORD *)(a1 + 222);
            v10 = *(_QWORD *)(a1 + 536) + 136LL * (v9 - 1);
          }
          else
          {
            v10 = a1 + 232;
            v20 = *(_WORD *)(a1 + 220);
          }
          v15 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL * (unsigned __int16)v4[6]);
          if ( v15 )
          {
            if ( v15 != a1 + 560 )
            {
              v16 = 0;
              while ( v15 != 104LL * v16 + a1 + 664 )
              {
                if ( ++v16 >= 4 )
                {
                  if ( *(_BYTE *)(v15 + 2) == 40 )
                    v17 = *(_QWORD *)(v15 + 104);
                  else
                    v17 = *(_QWORD *)(v15 + 56);
                  if ( (v17 & 0xFFF) != 0 )
                    v17 = v17 - (v17 & 0xFFF) + 4096;
                  if ( *(_QWORD *)(v17 + 4176) )
                  {
                    v21 = 0LL;
                    StorPortExtendedFunction(47LL, a1, 0LL, &v21, v19);
                    *(_QWORD *)(v17 + 4240) = v21;
                  }
                  if ( v8 >= v20 - 1 )
                  {
                    v8 = 0;
                    v7 = v7 != 1;
                  }
                  else
                  {
                    ++v8;
                  }
                  v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * v8);
                  if ( (v4[7] & 1) != v7 )
                    goto LABEL_8;
                  return v6;
                }
              }
            }
          }
        }
      }
    }
    return v6;
  }
  v12 = *(_QWORD *)(a1 + 544);
  v13 = 0;
  if ( v12 )
  {
    while ( v13 < *(unsigned __int16 *)(a1 + 226) )
    {
      v3 = v12 + 168LL * v13;
      v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 98));
      v14 = v4[7] & 1;
      v6 = v14 != *(_WORD *)(v3 + 100);
      if ( v14 != *(_WORD *)(v3 + 100) )
        goto LABEL_6;
      ++v13;
    }
  }
  return v6;
}
