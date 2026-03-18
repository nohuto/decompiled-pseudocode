/*
 * XREFs of ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01F9D58
 * Callers:
 *     ?xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAPEAUtagWND@@@Z @ 0x1C01FA008 (-xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUta.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB740 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01F908C (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?PointerFlagsToMessage@@YAII@Z @ 0x1C01F9390 (-PointerFlagsToMessage@@YAII@Z.c)
 *     ?RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F99C8 (-RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01FC984 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01FCE14 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 *     ValidatePointerOffset @ 0x1C022D8FC (ValidatePointerOffset.c)
 *     xxxPointerWindowHitTest @ 0x1C022DEF4 (xxxPointerWindowHitTest.c)
 */

struct tagWND *__fastcall xxxDeterminePointerTargetWindow(
        struct tagTHREADINFO *a1,
        const struct tagPOINTERINFONODE *a2,
        struct tagQ *a3,
        unsigned int a4,
        int *a5,
        struct tagPOINT *a6)
{
  unsigned __int16 v7; // r14
  PointerList *v10; // rcx
  unsigned __int64 v11; // r13
  __int64 v12; // r10
  __int64 v13; // rdi
  struct tagPOINT *v14; // r8
  int v15; // r15d
  int v16; // eax
  struct tagWND *result; // rax
  unsigned int v18; // r8d
  struct tagPOINTEREVENTINT *v19; // r10
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct tagWND *v25; // rdi
  __int64 v26; // rcx
  unsigned int v27; // r8d
  struct tagPOINTEREVENTINT *v28; // r10
  __int64 v29; // r11
  __int64 v30; // rax
  const struct tagPOINT *v31; // r8
  struct tagPOINT *v32; // rdi
  struct tagPOINT v33; // [rsp+60h] [rbp-19h] BYREF
  struct tagWND *v34; // [rsp+68h] [rbp-11h] BYREF
  __int64 v35; // [rsp+70h] [rbp-9h] BYREF
  __int64 v36; // [rsp+78h] [rbp-1h]
  int v37; // [rsp+D8h] [rbp+5Fh] BYREF
  int v38; // [rsp+E8h] [rbp+6Fh]

  v38 = a4;
  v7 = *((_WORD *)a2 + 30);
  v10 = (PointerList *)*((_QWORD *)a2 + 2);
  v11 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(gptiRit + 408LL) + 8LL);
  v33 = 0LL;
  v13 = *(_QWORD *)(v12 + 16);
  v15 = RecheckPointerCapture(v10, a4, &v34, &v37);
  if ( !v15 )
  {
    v16 = *((_DWORD *)a2 + 17);
    if ( (v16 & 0x40004) != 0 && (v16 & 0x10000) == 0 )
      return 0LL;
  }
  PointerList::GetPointerOffset((PointerList *)v7, (unsigned __int16)&v33, v14);
  if ( !v15 )
  {
    if ( (*((_DWORD *)a2 + 1) & 0x40) != 0 )
    {
      v24 = HMValidateHandleNoSecure(*((_QWORD *)a2 + 3), 1);
      v25 = (struct tagWND *)v24;
      if ( !v24 )
      {
LABEL_13:
        v30 = HMValidateHandleNoSecure(v11, 1);
        v34 = (struct tagWND *)v30;
        if ( v30 )
        {
          if ( *(char *)(v30 + 44) < 0 || *(char *)(v30 + 43) < 0 )
          {
            v30 = 0LL;
            v34 = 0LL;
          }
          if ( v30 )
            PointerList::SetPointerOffset((PointerList *)v7, (unsigned __int16)&v33, v31);
        }
        if ( !(unsigned int)IsPointerInfoNodeValid(a2) || (unsigned int)IsTargetSetForRetrieval(a1, a2) )
          return 0LL;
        RecheckPointerCapture(*((PointerList **)a2 + 2), (unsigned int)v38, &v34, &v37);
        goto LABEL_22;
      }
      v26 = *((_QWORD *)a1 + 46);
      *((_QWORD *)a1 + 46) = &v35;
      v35 = v26;
      v36 = v24;
      ++*(_DWORD *)(v24 + 8);
      v27 = PointerFlagsToMessage(*((_DWORD *)a2 + 17));
      v21 = xxxPointerWindowHitTest(
              a1,
              v25,
              v27,
              v29,
              *(struct tagPOINT *)((char *)a2 + 88),
              &v37,
              9,
              v28,
              *((_QWORD *)a2 + 2),
              &v33);
    }
    else
    {
      v35 = *((_QWORD *)a1 + 46);
      *((_QWORD *)a1 + 46) = &v35;
      v36 = v13;
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      v18 = PointerFlagsToMessage(*((_DWORD *)a2 + 17));
      v21 = xxxPointerWindowHitTest(
              a1,
              (struct tagWND *)v13,
              v18,
              v20,
              *(struct tagPOINT *)((char *)a2 + 88),
              &v37,
              1,
              v19,
              *((_QWORD *)a2 + 2),
              &v33);
    }
    v11 = v21;
    ThreadUnlock1(v23, v22);
    goto LABEL_13;
  }
LABEL_22:
  v32 = a6;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ValidatePointerOffset)(
                        *((_QWORD *)a2 + 11),
                        (char *)a2 + 48,
                        v33,
                        a6) )
    *v32 = 0LL;
  result = v34;
  if ( v34 )
  {
    if ( a3 && *(struct tagQ **)(*((_QWORD *)v34 + 2) + 384LL) != a3 )
      result = 0LL;
    if ( result )
      *a5 = v37;
  }
  return result;
}
