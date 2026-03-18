/*
 * XREFs of ViDeadlockForgetResourceHistory @ 0x140750EF8
 * Callers:
 *     ViDeadlockTrimResources @ 0x140751920 (ViDeadlockTrimResources.c)
 * Callees:
 *     ViDeadlockRemoveNode @ 0x14075136C (ViDeadlockRemoveNode.c)
 */

void __fastcall ViDeadlockForgetResourceHistory(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  int v4; // ebp
  int v7; // r13d
  _DWORD *v8; // rsi
  _QWORD **v9; // r14
  _QWORD *v10; // rdi
  unsigned int v11; // esi
  _QWORD *v12; // rbx
  unsigned int v13; // ecx
  _QWORD *v14; // rdi
  _QWORD *v15; // rbx
  _DWORD *v16; // [rsp+20h] [rbp-48h]
  unsigned int v17; // [rsp+78h] [rbp+10h]
  unsigned int v18; // [rsp+80h] [rbp+18h]

  v18 = a3;
  v17 = a2;
  v4 = 0;
  v7 = 0;
  if ( !*(_QWORD *)(a1 + 16) && (unsigned __int16)*(_DWORD *)(a1 + 4) >= a2 )
  {
    v8 = ViDeadlockGlobals;
    v9 = (_QWORD **)(a1 + 24);
    v10 = *(_QWORD **)(a1 + 24);
    v16 = ViDeadlockGlobals;
    if ( v10 != (_QWORD *)(a1 + 24) )
    {
      v11 = *((_DWORD *)ViDeadlockGlobals + 8201);
      while ( 1 )
      {
        v12 = v10 - 5;
        v10 = (_QWORD *)*v10;
        v13 = *((_DWORD *)v12 + 18) >> 3;
        if ( v11 <= v13 )
        {
          if ( v13 - v11 < a3 )
          {
LABEL_9:
            ViDeadlockRemoveNode(v12, 0LL);
            ++v7;
            a3 = v18;
            *v12 = *a4;
            *a4 = v12;
          }
        }
        else if ( v11 - v13 > a3 )
        {
          goto LABEL_9;
        }
        if ( v10 == v9 )
        {
          v8 = v16;
          a2 = v17;
          break;
        }
      }
    }
    v8[8197] += v7;
    if ( (unsigned __int16)*(_DWORD *)(a1 + 4) >= a2 )
    {
      v14 = *v9;
      if ( *v9 != v9 )
      {
        do
        {
          if ( (unsigned __int16)*(_DWORD *)(a1 + 4) < v17 )
            break;
          v15 = v14 - 5;
          v14 = (_QWORD *)*v14;
          ViDeadlockRemoveNode(v15, 0LL);
          ++v4;
          *v15 = *a4;
          *a4 = v15;
        }
        while ( v14 != v9 );
        v8 = v16;
      }
      v8[8198] += v4;
    }
  }
}
