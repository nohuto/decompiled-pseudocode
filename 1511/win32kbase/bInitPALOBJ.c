/*
 * XREFs of bInitPALOBJ @ 0x1C013A6D4
 * Callers:
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C0012318 (GreCreateSemaphoreInternal.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z @ 0x1C0022CF0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z.c)
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00492E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreCreatePaletteInternal @ 0x1C005CF0C (GreCreatePaletteInternal.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005DAB0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 bInitPALOBJ()
{
  int *v0; // rcx
  unsigned int v1; // edi
  int v2; // edx
  int *v3; // r8
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int64 PaletteInternal; // rax
  __int64 v7; // rbx
  int v8; // edx
  __int64 v9; // r8
  __int64 *v10; // r9
  unsigned int v11; // edx
  __int64 v12; // r10
  __int64 v13; // r10
  int v14; // edx
  int v15; // r8d
  KDEFERRED_ROUTINE *v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 *v19; // rax
  __int64 *v21; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+48h] [rbp-18h]
  KDEFERRED_ROUTINE **v23; // [rsp+50h] [rbp-10h] BYREF
  int v24; // [rsp+58h] [rbp-8h]
  _QWORD *v25; // [rsp+70h] [rbp+10h] BYREF

  v0 = (int *)&unk_1C0106B8C;
  v1 = 0;
  pArrayOfSquares = (unsigned int *)&unk_1C0106B8C;
  v2 = 0;
  v3 = (int *)&unk_1C0106B8C;
  LODWORD(v4) = 256;
  do
  {
    v5 = v2 * v2;
    ++v2;
    *v3-- = v5;
    *v0++ = v5;
  }
  while ( v2 < 256 );
  ghsemPalette = (PERESOURCE)GreCreateSemaphoreInternal();
  if ( !ghsemPalette )
    return 0LL;
  PaletteInternal = GreCreatePaletteInternal((__int64)&logDefaultPal, (unsigned __int16)word_1C0102122);
  if ( !(unsigned int)bSetStockObject(PaletteInternal, 15, 0) )
    return 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v25, qword_1C0103E68);
  v7 = (__int64)v25;
  HmgSetOwner(*v25, 0, 8);
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)v7;
  dclevelDefault = qword_1C0103E68;
  qword_1C0101058 = v7;
  v22 = 0;
  v21 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v21, 1, 0x100u, 0LL, 0, 0, 0, 0x400u) )
  {
    PALMEMOBJ::~PALMEMOBJ(&v21, v8, v9);
    HmgDecrementShareReferenceCount((_DWORD *)v7);
    return 0LL;
  }
  v10 = v21;
  WPP_MAIN_CB.Dpc.DeferredContext = v21;
  v11 = *(_DWORD *)(v7 + 28) >> 1;
  if ( v11 )
  {
    v9 = 0LL;
    v12 = v11;
    do
    {
      *(_DWORD *)(v9 + v10[16]) = *(_DWORD *)(v9 + *(_QWORD *)(v7 + 128));
      v9 += 4LL;
      --v12;
    }
    while ( v12 );
  }
  if ( v11 )
  {
    v13 = v11;
    do
    {
      v4 = (unsigned int)(v4 - 1);
      v9 = (unsigned int)(v4 - 236);
      *(_DWORD *)(v10[16] + 4 * v4) = *(_DWORD *)(*(_QWORD *)(v7 + 128) + 4 * v9);
      --v13;
    }
    while ( v13 );
  }
  v21 = 0LL;
  PALMEMOBJ::~PALMEMOBJ(&v21, v11, v9);
  HmgDecrementShareReferenceCount((_DWORD *)v7);
  v24 = 0;
  v23 = 0LL;
  if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v23, 1, 2u, &gaulMono, 0, 0, 0, 0x2200u) )
  {
    v16 = *v23;
    WPP_MAIN_CB.Dpc.ProcessorHistory = (KAFFINITY)v23;
    v24 = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = v16;
    v22 = 0;
    v21 = 0LL;
    if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v21, 8, 0, 0LL, 0, 0, 0, 0x200u) )
    {
      v19 = v21;
      v21 = 0LL;
      v1 = 1;
      WPP_MAIN_CB.Dpc.SystemArgument1 = v19;
    }
    PALMEMOBJ::~PALMEMOBJ(&v21, v17, v18);
  }
  PALMEMOBJ::~PALMEMOBJ((__int64 **)&v23, v14, v15);
  return v1;
}
