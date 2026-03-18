/*
 * XREFs of ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01D79B8
 * Callers:
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01D7CA8 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?IsKeyDownSpecified@@YAHEPEBE@Z @ 0x1C01D7864 (-IsKeyDownSpecified@@YAHEPEBE@Z.c)
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8014 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01D88FC (-SendKeyUpDown@@YAXEE@Z.c)
 */

__int64 __fastcall MapFlexibleKeys(struct tagKE *a1, char a2, struct DEVICEINFO *a3)
{
  unsigned int v3; // esi
  struct tagKE *v4; // r13
  char v5; // al
  unsigned int v6; // ebx
  __int64 v7; // r9
  struct tagSCANCODEFLEXIBLEMAP *v8; // r10
  int v9; // r12d
  unsigned __int8 v10; // r15
  __int64 v11; // r11
  unsigned int v12; // edi
  char *v13; // r14
  int v14; // eax
  int v15; // r9d
  ULONG v16; // r11d
  unsigned int v17; // esi
  unsigned int v18; // r14d
  unsigned int v19; // r12d
  __int64 v20; // rdi
  __int64 v21; // r15
  char v22; // cl
  unsigned __int8 v23; // cl
  __int64 v24; // rax
  unsigned int v25; // r15d
  __int64 v26; // r12
  unsigned __int8 v27; // cl
  __int64 v28; // rax
  USHORT v29; // cx
  char v30; // al
  unsigned __int8 *v31; // rbx
  __int64 v32; // rdi
  unsigned __int8 *v33; // rbx
  __int64 v34; // rdi
  _KEYBOARD_INPUT_DATA v39; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v40[8]; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v41[8]; // [rsp+50h] [rbp-10h] BYREF

  v3 = gdwFlexMapSize;
  v4 = a1;
  v5 = a2;
  v6 = 0;
  LOWORD(v7) = 1;
  if ( !gdwFlexMapSize )
    return 1LL;
  v8 = gpFlexMap;
  v9 = iLastMatchedTarget;
  v10 = bLastVKDown;
  while ( 1 )
  {
    v11 = 16LL * v6;
    if ( *((_BYTE *)v8 + v11 + 1) == v5 )
      break;
LABEL_14:
    if ( ++v6 >= v3 )
      goto LABEL_17;
  }
  if ( *((_BYTE *)v8 + v11) != *(_BYTE *)v4 )
  {
LABEL_13:
    v5 = a2;
    goto LABEL_14;
  }
  if ( (*((_WORD *)v4 + 1) & 0x8000) == 0 || v6 != v9 )
  {
    v12 = 0;
    v13 = (char *)&unk_1C02EBA30;
    do
    {
      if ( *v13 == v10 )
      {
        v10 = 0;
      }
      else
      {
        v14 = IsKeyDownSpecified(*v13, (const unsigned __int8 *)v8 + v11 + 2);
        if ( v15 == v14 )
          break;
      }
      ++v12;
      ++v13;
    }
    while ( v12 < 0xA );
    v4 = a1;
    LOWORD(v7) = 1;
    bLastVKDown = v10;
    if ( v12 >= 0xA )
      goto LABEL_17;
    goto LABEL_13;
  }
  iLastMatchedTarget = -1;
LABEL_17:
  if ( v6 >= v3 )
    return 1LL;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *((__int16 *)v4 + 1) >= 0 )
  {
    v19 = 0;
    v20 = 16LL * v6;
    v21 = v20;
    do
    {
      v22 = *((_BYTE *)v8 + v21 + 2);
      if ( !v22 )
        break;
      if ( !(unsigned int)IsKeyDownSpecified(v22, (const unsigned __int8 *)v8 + v20 + 10) )
      {
        v24 = v17;
        v17 += v7;
        v41[v24] = v23;
        SendKeyUpDown(v23, v7);
        v8 = gpFlexMap;
        v7 = 1LL;
        v16 = 0;
      }
      v19 += v7;
      v21 += v7;
    }
    while ( v19 < 6 );
    v25 = v16;
    v26 = 16LL * v6;
    do
    {
      if ( *((_BYTE *)v8 + 17 * v6 + 10) == (_BYTE)v16 )
        break;
      if ( !(unsigned int)IsKeyDownSpecified(*((_BYTE *)v8 + v26 + 10), (const unsigned __int8 *)v8 + v20 + 2) )
      {
        v28 = v18;
        v18 += v7;
        v40[v28] = v27;
        SendKeyUpDown(v27, 0);
        v8 = gpFlexMap;
        v7 = 1LL;
        v16 = 0;
      }
      v25 += v7;
      v26 += v7;
    }
    while ( v25 < 6 );
    v4 = a1;
  }
  v29 = v16;
  v39.ExtraInformation = v16;
  v39.Flags = v16;
  v30 = *((_BYTE *)v8 + 16 * v6 + 9);
  if ( v30 == -32 )
  {
    v29 = 2;
    goto LABEL_34;
  }
  if ( v30 == -31 )
  {
    v29 = 4;
LABEL_34:
    v39.Flags = v29;
  }
  if ( (*((_WORD *)v4 + 1) & 0x8000) != 0 )
    v39.Flags = v7 | v29;
  v39.MakeCode = *((unsigned __int8 *)v8 + 16 * v6 + 8);
  v39.UnitId = v16;
  ProcessKeyboardInputWorker(&v39, a3, 0);
  if ( (*((_WORD *)v4 + 1) & 0x8000) == 0 )
  {
    bLastVKDown = gbVKLastDown;
    iLastMatchedTarget = v6;
  }
  if ( v17 )
  {
    v31 = v41;
    v32 = v17;
    do
    {
      SendKeyUpDown(*v31++, 0);
      --v32;
    }
    while ( v32 );
  }
  if ( v18 )
  {
    v33 = v40;
    v34 = v18;
    do
    {
      SendKeyUpDown(*v33++, 1u);
      --v34;
    }
    while ( v34 );
  }
  return 0LL;
}
