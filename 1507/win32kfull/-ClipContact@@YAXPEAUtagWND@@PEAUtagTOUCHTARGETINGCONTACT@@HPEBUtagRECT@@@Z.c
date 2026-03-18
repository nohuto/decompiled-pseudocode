/*
 * XREFs of ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C022AC18
 * Callers:
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B488 (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022CF64 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     TouchTargetingClipContact @ 0x1C024B7D4 (TouchTargetingClipContact.c)
 */

void __fastcall ClipContact(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        __int64 a3,
        const struct tagRECT *a4)
{
  const struct tagRECT *v5; // rbp
  __int64 v6; // rcx
  unsigned int v7; // r14d
  struct tagTOUCHTARGETINGCONTACT *v8; // r15
  __int128 *v9; // rcx
  __int64 v10; // rcx
  unsigned int RegionData; // eax
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  __int128 *v16; // rdi
  __int64 v17; // rsi
  __int128 v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF

  v5 = a4;
  v6 = *((_QWORD *)a1 + 26);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    GreGetRgnBox(v6, &v19);
    v9 = &v19;
    a4 = v5;
    a3 = v7;
    a2 = v8;
LABEL_12:
    TouchTargetingClipContact(v9, a2, a3, a4, v18, *((_QWORD *)&v18 + 1));
    return;
  }
  v10 = *((_QWORD *)a1 + 25);
  if ( !v10 )
  {
    v9 = &v18;
    v18 = *((_OWORD *)a1 + 7);
    goto LABEL_12;
  }
  RegionData = GreGetRegionData(v10, 0LL, 0LL);
  v12 = RegionData;
  if ( RegionData )
  {
    v13 = Win32AllocPool((int)RegionData, 1920103253LL);
    v14 = v13;
    if ( v13 )
    {
      if ( (unsigned int)GreGetRegionData(*((_QWORD *)a1 + 25), v12, v13) )
      {
        v15 = *(_DWORD *)(v14 + 8);
        v16 = (__int128 *)(v14 + 32);
        if ( v15 > 0 )
        {
          v17 = (unsigned int)v15;
          do
          {
            v18 = *v16;
            ((void (__fastcall *)(__int128 *, struct tagTOUCHTARGETINGCONTACT *, _QWORD, const struct tagRECT *))TouchTargetingClipContact)(
              &v18,
              v8,
              v7,
              v5);
            ++v16;
            --v17;
          }
          while ( v17 );
        }
      }
      Win32FreePool(v14);
    }
  }
}
