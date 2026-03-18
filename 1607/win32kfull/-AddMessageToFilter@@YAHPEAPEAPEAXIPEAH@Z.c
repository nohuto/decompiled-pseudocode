/*
 * XREFs of ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C009B9D0
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C009B3D0 (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C009B5B4 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?MsgLookupTableAlloc@@YAPEAXI@Z @ 0x1C009BAFC (-MsgLookupTableAlloc@@YAPEAXI@Z.c)
 */

__int64 __fastcall AddMessageToFilter(void ***a1, unsigned int a2, int *a3)
{
  void **v3; // rbx
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned int v9; // r13d
  _QWORD *v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // r12
  int v13; // edx
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // [rsp+68h] [rbp+10h]

  v17 = a2;
  v3 = *a1;
  v4 = 0LL;
  v5 = a2;
  if ( !*a1 )
  {
    v3 = (void **)MsgLookupTableAlloc(0);
    if ( !v3 )
      return 0;
  }
  v7 = v5;
  v8 = v5 >> 13;
  v9 = 1;
  v10 = v3[v5 >> 13];
  if ( !v10 )
  {
    v10 = MsgLookupTableAlloc(1u);
    if ( !v10 )
      goto LABEL_24;
  }
  v11 = (v7 >> 9) & 0xF;
  v4 = (_BYTE *)v10[v11];
  if ( !v4 )
  {
    v4 = MsgLookupTableAlloc(2u);
    if ( !v4 )
    {
      if ( v10 != v3[v8] )
        Win32FreePool(v10, v15, v16);
LABEL_24:
      if ( v3 && v3 != *a1 )
        Win32FreePool(v3, v15, v16);
      goto LABEL_14;
    }
  }
  v12 = (v7 >> 3) & 0x3F;
  v13 = (unsigned __int8)v4[v12];
  if ( (v13 & (1 << (v17 & 7))) == 0 )
    v4[v12] = v13 | (1 << (v17 & 7));
  if ( a3 )
    *a3 = v13 & (1 << (v17 & 7));
  if ( v4 != (_BYTE *)v10[v11] )
    v10[v11] = v4;
  if ( v10 != v3[v8] )
    v3[v8] = v10;
  if ( v3 != *a1 )
    *a1 = v3;
LABEL_14:
  if ( !v4 )
    return 0;
  return v9;
}
