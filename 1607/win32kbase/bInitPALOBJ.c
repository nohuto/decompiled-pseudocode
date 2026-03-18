/*
 * XREFs of bInitPALOBJ @ 0x1C0156360
 * Callers:
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C000D92C (GreCreateSemaphoreInternal.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0039260 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005C1A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005CB68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005CB90 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00BF210 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 */

__int64 bInitPALOBJ()
{
  unsigned int v0; // edi
  int *v1; // rcx
  int v2; // edx
  int *v3; // r8
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int64 v7; // rbx
  unsigned int *v8; // rbx
  unsigned int *v9; // r9
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // r10
  struct _SINGLE_LIST_ENTRY *v14; // rax
  KDEFERRED_ROUTINE *v15; // rax
  unsigned int *v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+58h] [rbp-18h]
  unsigned int *v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+68h] [rbp-8h]
  unsigned int *v20; // [rsp+90h] [rbp+20h] BYREF

  v0 = 0;
  v1 = (int *)&unk_1C011DF9C;
  pArrayOfSquares = (unsigned int *)&unk_1C011DF9C;
  v2 = 0;
  v3 = (int *)&unk_1C011DF9C;
  LODWORD(v4) = 256;
  do
  {
    v5 = v2 * v2;
    ++v2;
    *v3-- = v5;
    *v1++ = v5;
  }
  while ( v2 < 256 );
  ghsemPalette = (HSEMAPHORE)GreCreateSemaphoreInternal();
  if ( !ghsemPalette )
    return 0LL;
  if ( logDefaultPal != 768 || !word_1C0119762 )
    goto LABEL_9;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette(
                        (PALMEMOBJ *)&v16,
                        1,
                        (unsigned __int16)word_1C0119762,
                        dword_1C0119764,
                        0,
                        0,
                        0,
                        0x500u,
                        0) )
  {
    PALMEMOBJ::~PALMEMOBJ(&v16);
LABEL_9:
    v7 = 0LL;
    goto LABEL_10;
  }
  v17 = 1;
  v7 = *(_QWORD *)v16;
  PALMEMOBJ::~PALMEMOBJ(&v16);
LABEL_10:
  if ( !(unsigned int)bSetStockObject(v7, 15, 0) )
    return 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v20, (HPALETTE)gahStockObjects[15]);
  v8 = v20;
  HmgSetOwner(*(_QWORD *)v20, 0, 8u);
  WPP_MAIN_CB.DeviceQueue.1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)v8;
  dclevelDefault = (HPALETTE)gahStockObjects[15];
  qword_1C0118FD8 = (__int64)v8;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v16, 1, 0x100u, 0LL, 0, 0, 0, 0x400u, 1) )
  {
    PALMEMOBJ::~PALMEMOBJ(&v16);
    EPALOBJ::~EPALOBJ(&v20);
    return 0LL;
  }
  v9 = v16;
  WPP_MAIN_CB.Dpc.ProcessorHistory = (KAFFINITY)v16;
  v10 = v8[7] >> 1;
  if ( v10 )
  {
    v11 = 0LL;
    v12 = v10;
    do
    {
      *(_DWORD *)(v11 + *((_QWORD *)v9 + 15)) = *(_DWORD *)(v11 + *((_QWORD *)v8 + 15));
      v11 += 4LL;
      --v12;
    }
    while ( v12 );
  }
  if ( v10 )
  {
    v13 = v10;
    do
    {
      v4 = (unsigned int)(v4 - 1);
      *(_DWORD *)(*((_QWORD *)v9 + 15) + 4 * v4) = *(_DWORD *)(*((_QWORD *)v8 + 15) + 4LL * (unsigned int)(v4 - 236));
      --v13;
    }
    while ( v13 );
  }
  v16 = 0LL;
  PALMEMOBJ::~PALMEMOBJ(&v16);
  EPALOBJ::~EPALOBJ(&v20);
  v19 = 0;
  v18 = 0LL;
  if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 1, 2u, &gaulMono, 0, 0, 0, 0x2200u, 1) )
  {
    v14 = *(struct _SINGLE_LIST_ENTRY **)v18;
    *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = v18;
    v19 = 1;
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = v14;
    v17 = 0;
    v16 = 0LL;
    if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v16, 8, 0, 0LL, 0, 0, 0, 0x200u, 1) )
    {
      v15 = (KDEFERRED_ROUTINE *)v16;
      v16 = 0LL;
      v0 = 1;
      WPP_MAIN_CB.Dpc.DeferredRoutine = v15;
    }
    PALMEMOBJ::~PALMEMOBJ(&v16);
  }
  PALMEMOBJ::~PALMEMOBJ(&v18);
  return v0;
}
