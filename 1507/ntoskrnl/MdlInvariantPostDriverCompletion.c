/*
 * XREFs of MdlInvariantPostDriverCompletion @ 0x14025A994
 * Callers:
 *     IovpCompleteRequest4 @ 0x1407408D4 (IovpCompleteRequest4.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall MdlInvariantPostDriverCompletion(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r11
  _QWORD *v8; // r9
  char *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r11
  _QWORD *v14; // rdx

  v2 = *(_QWORD **)(a2 + 8);
  if ( !*v2 )
  {
    v4 = *(char *)(a2 + 67);
    if ( v4 >= *(char *)(a2 + 66) - 1 )
    {
      v5 = *(_QWORD *)(a1 + 224);
      if ( v5 )
      {
        v6 = 0LL;
        if ( *(_DWORD *)v5 )
        {
          v7 = *(_QWORD *)(v5 + 8);
          while ( 1 )
          {
            v8 = *(_QWORD **)(32LL * (unsigned int)v6 + v7);
            if ( v8 )
            {
              if ( v8 == v2 )
                break;
            }
            v6 = (unsigned int)(v6 + 1);
            if ( (unsigned int)v6 >= *(_DWORD *)v5 )
              goto LABEL_9;
          }
          v9 = (char *)(v7 + 32 * v6);
        }
        else
        {
LABEL_9:
          v9 = 0LL;
        }
        if ( v9 )
          goto LABEL_22;
      }
    }
    v10 = *(_QWORD *)(a1 + 224);
    if ( v10 )
    {
      v11 = *(_QWORD **)(v10 + 16);
      if ( v11 )
      {
        v12 = 0LL;
        if ( *(_DWORD *)v10 )
        {
          v13 = *(_QWORD *)(v10 + 8);
          while ( 1 )
          {
            v14 = *(_QWORD **)(32LL * (unsigned int)v12 + v13);
            if ( v14 )
            {
              if ( v14 == v11 )
                break;
            }
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= *(_DWORD *)v10 )
              goto LABEL_18;
          }
          v9 = (char *)(v13 + 32 * v12);
        }
        else
        {
LABEL_18:
          v9 = 0LL;
        }
        if ( v9 && (v9[28] == v4 + 1 || v11 != v2) )
LABEL_22:
          memset(v9, 0, 0x20uLL);
      }
    }
  }
}
