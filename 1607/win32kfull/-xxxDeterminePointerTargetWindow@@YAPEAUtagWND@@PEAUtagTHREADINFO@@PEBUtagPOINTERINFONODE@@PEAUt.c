/*
 * XREFs of ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01F0F5C
 * Callers:
 *     ?xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAPEAUtagWND@@@Z @ 0x1C01F120C (-xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUta.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01F02A4 (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?PointerFlagsToMessage@@YAII@Z @ 0x1C01F0598 (-PointerFlagsToMessage@@YAII@Z.c)
 *     ?RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F0BD0 (-RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01F3C24 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01F4094 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 *     ValidatePointerOffset @ 0x1C0223668 (ValidatePointerOffset.c)
 *     xxxPointerWindowHitTest @ 0x1C0223C68 (xxxPointerWindowHitTest.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r8d
  struct tagPOINTEREVENTINT *v22; // r10
  __int64 v23; // r11
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct tagWND *v31; // rdi
  __int64 v32; // rcx
  unsigned int v33; // r8d
  struct tagPOINTEREVENTINT *v34; // r10
  __int64 v35; // r11
  __int64 v36; // rax
  const struct tagPOINT *v37; // r8
  struct tagPOINT *v38; // rdi
  struct tagPOINT v39; // [rsp+60h] [rbp-19h] BYREF
  struct tagWND *v40; // [rsp+68h] [rbp-11h] BYREF
  __int64 v41; // [rsp+70h] [rbp-9h] BYREF
  __int64 v42; // [rsp+78h] [rbp-1h]
  int v43; // [rsp+D8h] [rbp+5Fh] BYREF
  int v44; // [rsp+E8h] [rbp+6Fh]

  v44 = a4;
  v7 = *((_WORD *)a2 + 30);
  v10 = (PointerList *)*((_QWORD *)a2 + 2);
  v11 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(gptiRit + 408LL) + 8LL);
  v39 = 0LL;
  v13 = *(_QWORD *)(v12 + 16);
  v15 = RecheckPointerCapture(v10, a4, &v40, &v43);
  if ( !v15 )
  {
    v16 = *((_DWORD *)a2 + 17);
    if ( (v16 & 0x40004) != 0 && (v16 & 0x10000) == 0 )
      return 0LL;
  }
  PointerList::GetPointerOffset((PointerList *)v7, (unsigned __int16)&v39, v14);
  if ( !v15 )
  {
    if ( (*((_DWORD *)a2 + 1) & 0x80u) != 0 )
    {
      LOBYTE(v18) = 1;
      v27 = HMValidateHandleNoSecure(*((_QWORD *)a2 + 3), v18, v19, v20);
      v31 = (struct tagWND *)v27;
      if ( !v27 )
      {
LABEL_13:
        LOBYTE(v28) = 1;
        v36 = HMValidateHandleNoSecure(v11, v28, v29, v30);
        v40 = (struct tagWND *)v36;
        if ( v36 )
        {
          if ( *(char *)(v36 + 44) < 0 || *(char *)(v36 + 43) < 0 )
          {
            v36 = 0LL;
            v40 = 0LL;
          }
          if ( v36 )
            PointerList::SetPointerOffset((PointerList *)v7, (unsigned __int16)&v39, v37);
        }
        if ( !(unsigned int)IsPointerInfoNodeValid(a2) || (unsigned int)IsTargetSetForRetrieval(a1, a2) )
          return 0LL;
        RecheckPointerCapture(*((PointerList **)a2 + 2), (unsigned int)v44, &v40, &v43);
        goto LABEL_22;
      }
      v32 = *((_QWORD *)a1 + 46);
      *((_QWORD *)a1 + 46) = &v41;
      v41 = v32;
      v42 = v27;
      ++*(_DWORD *)(v27 + 8);
      v33 = PointerFlagsToMessage(*((_DWORD *)a2 + 17));
      v24 = xxxPointerWindowHitTest(
              a1,
              v31,
              v33,
              v35,
              *(struct tagPOINT *)((char *)a2 + 88),
              &v43,
              9,
              v34,
              *((_QWORD *)a2 + 2),
              &v39);
    }
    else
    {
      v41 = *((_QWORD *)a1 + 46);
      *((_QWORD *)a1 + 46) = &v41;
      v42 = v13;
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      v21 = PointerFlagsToMessage(*((_DWORD *)a2 + 17));
      v24 = xxxPointerWindowHitTest(
              a1,
              (struct tagWND *)v13,
              v21,
              v23,
              *(struct tagPOINT *)((char *)a2 + 88),
              &v43,
              1,
              v22,
              *((_QWORD *)a2 + 2),
              &v39);
    }
    v11 = v24;
    ThreadUnlock1(v26, v25);
    goto LABEL_13;
  }
LABEL_22:
  v38 = a6;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ValidatePointerOffset)(
                        *((_QWORD *)a2 + 11),
                        (char *)a2 + 48,
                        v39,
                        a6) )
    *v38 = 0LL;
  result = v40;
  if ( v40 )
  {
    if ( a3 && *(struct tagQ **)(*((_QWORD *)v40 + 2) + 384LL) != a3 )
      result = 0LL;
    if ( result )
      *a5 = v43;
  }
  return result;
}
