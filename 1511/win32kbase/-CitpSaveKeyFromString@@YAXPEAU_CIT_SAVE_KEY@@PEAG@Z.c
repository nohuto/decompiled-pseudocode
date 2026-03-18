/*
 * XREFs of ?CitpSaveKeyFromString@@YAXPEAU_CIT_SAVE_KEY@@PEAG@Z @ 0x1C00E4DA4
 * Callers:
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00E59E4 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpSaveKeyFromString(struct _CIT_SAVE_KEY *a1, unsigned __int16 *a2)
{
  __int64 v2; // r10
  unsigned int v4; // r8d
  char v6; // cl
  char v7; // cl
  __int64 v8; // r8
  unsigned __int16 v9; // dx
  char v10; // al

  v2 = 0LL;
  v4 = 0;
  do
  {
    v6 = a2[v4];
    if ( a2[v4] > 0x39u )
      v7 = v6 - 55;
    else
      v7 = v6 - 48;
    v8 = v4 + 1;
    *((_BYTE *)a1 + v2) = v7;
    v9 = a2[v8];
    if ( v9 > 0x39u )
      v10 = v9 - 55;
    else
      v10 = v9 - 48;
    v4 = v8 + 1;
    *((_BYTE *)a1 + v2) = v7 | (16 * v10);
    v2 = (unsigned int)(v2 + 1);
  }
  while ( v4 < 0x20 );
}
