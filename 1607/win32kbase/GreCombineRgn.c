/*
 * XREFs of GreCombineRgn @ 0x1C002FB30
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0036CE0 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 *     UserValidateCopyRgn @ 0x1C0057790 (UserValidateCopyRgn.c)
 *     NtGdiCombineRgn @ 0x1C00782E0 (NtGdiCombineRgn.c)
 *     EngCombineRgn @ 0x1C00787F0 (EngCombineRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0078F90 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     EngCopyRgn @ 0x1C00CB3E0 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C00CB580 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C00CB6E0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00CB770 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00CB800 (EngXorRgn.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002D344 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C002D3A0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002E230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0036760 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0036790 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0036830 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0036900 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     HmgReplaceObject @ 0x1C0036E20 (HmgReplaceObject.c)
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 Object; // rax
  _QWORD *v15; // rax
  _QWORD *ThreadWin32Thread; // rax
  __int16 *v17; // rsi
  __int64 v18; // r8
  unsigned int v19; // eax
  __int16 *v20; // r14
  __int64 v21; // rcx
  __int16 **v22; // rax
  __int16 *v24; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+30h] [rbp-D8h]
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v27[12]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v29[12]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-60h] BYREF
  char v31[40]; // [rsp+B0h] [rbp-58h] BYREF
  int v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h] BYREF
  char v34[40]; // [rsp+E8h] [rbp-20h] BYREF
  int v35; // [rsp+110h] [rbp+8h]
  _QWORD v36[7]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v37[7]; // [rsp+150h] [rbp+48h] BYREF
  _QWORD v38[7]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v39[11]; // [rsp+1C0h] [rbp+B8h] BYREF

  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 == 5 )
    {
      v8 = 1;
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v30, a1, 0, 1);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v33, a2, 1, 0);
      v9 = v30;
      if ( v30 )
      {
        if ( !v33 )
        {
LABEL_10:
          EngSetLastError(6u);
LABEL_11:
          v8 = 0;
LABEL_12:
          if ( !v35 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v33);
          if ( v33 )
            _InterlockedDecrement((volatile signed __int32 *)(v33 + 12));
          UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v34);
          if ( !v32 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v30);
          if ( v30 )
            _InterlockedDecrement((volatile signed __int32 *)(v30 + 12));
          UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v31);
          return v8;
        }
        v10 = (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)&v30, (struct RGNOBJ *)&v33) == 0;
        v9 = v30;
        if ( !v10 )
        {
          if ( *(_DWORD *)(v30 + 84) != 1 )
            v8 = (*(_DWORD *)(v30 + 80) > 0xA0u) + 2;
          goto LABEL_12;
        }
      }
      if ( v33 && v9 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( a1 != a2 && a1 != a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v38, a2, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v37, a3, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v36, a1, 0, 1);
      v11 = v38[0];
      if ( !v38[0] )
        goto LABEL_32;
      v12 = v37[0];
      if ( v37[0] && v36[0] )
      {
        if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v36, (struct RGNOBJ *)v38, (struct RGNOBJ *)v37, a4) )
        {
          v8 = RGNOBJ::iComplexity((RGNOBJ *)v36);
LABEL_34:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v36);
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v37);
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v38);
          return v8;
        }
        v11 = v38[0];
        v12 = v37[0];
      }
      if ( !v11 || !v12 || !v36[0] )
LABEL_32:
        EngSetLastError(6u);
      v8 = 0;
      goto LABEL_34;
    }
    if ( a2 == a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v39, a1, 0, 1);
      v13 = v39[0];
      if ( v39[0] )
      {
        if ( (unsigned int)(a4 - 3) <= 1 )
        {
          *(_DWORD *)(v39[0] + 80LL) = 120;
          *(_QWORD *)(v13 + 84) = 1LL;
          *(_QWORD *)(v13 + 92) = 0LL;
          *(_DWORD *)(v13 + 100) = 0;
          *(_DWORD *)(v13 + 104) = 0;
          *(_DWORD *)(v13 + 108) = 0x80000000;
          *(_QWORD *)(v13 + 112) = 0x7FFFFFFFLL;
          *(_QWORD *)(v13 + 40) = v13 + 120;
        }
        v8 = RGNOBJ::iComplexity((RGNOBJ *)v39);
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v39);
      }
      else
      {
        EngSetLastError(6u);
        v8 = 0;
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v39);
      }
      return v8;
    }
    LODWORD(v25) = 0;
    Object = AllocateObject(0xD8uLL);
    v24 = (__int16 *)Object;
    if ( Object )
    {
      *(_QWORD *)(Object + 24) = 216LL;
      *(_DWORD *)(Object + 80) = 0;
      *(_QWORD *)(Object + 32) = 0LL;
      v15 = (_QWORD *)(Object + 48);
      v15[1] = v15;
      *v15 = v15;
    }
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    v17 = v24;
    if ( ThreadWin32Thread && *ThreadWin32Thread && v24 )
      PushThreadGuardedObject(v24 + 24, v24, CleanUpRegion);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v26, a2, 0, a1 == a2);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v28, a3, 0, a1 == a3);
    if ( v24 )
    {
      if ( !v26 )
      {
LABEL_62:
        EngSetLastError(6u);
        goto LABEL_63;
      }
      if ( v28 )
      {
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v24, (struct RGNOBJ *)&v26, (struct RGNOBJ *)&v28, a4) )
        {
          if ( a1 == a2 )
          {
            v17 = v24;
            LOBYTE(v18) = 4;
            if ( (unsigned int)HmgReplaceObject(v26, v24, v18) )
            {
              RGNOBJ::vSwap((RGNOBJ *)&v26, (struct RGNOBJ *)&v24);
              v17 = v24;
              if ( *(_DWORD *)(v26 + 84) == 1 )
                v8 = 1;
              else
                v8 = (*(_DWORD *)(v26 + 80) > 0xA0u) + 2;
              goto LABEL_64;
            }
          }
          else
          {
            if ( (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)&v28, (struct RGNOBJ *)&v24) )
            {
              v19 = RGNOBJ::iComplexity((RGNOBJ *)&v28);
              v17 = v24;
              v8 = v19;
LABEL_64:
              if ( !v29[10] )
                RGNOBJ::UpdateUserRgn((RGNOBJ *)&v28);
              if ( v28 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(v28 + 12));
                v17 = v24;
              }
              UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v29);
              if ( !v27[10] )
                RGNOBJ::UpdateUserRgn((RGNOBJ *)&v26);
              if ( v26 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
                v17 = v24;
              }
              UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v27);
              if ( v17 )
              {
                v20 = v17 + 24;
                if ( v17 != (__int16 *)-48LL )
                {
                  KeEnterCriticalRegion();
                  v21 = *(_QWORD *)v20;
                  v22 = (__int16 **)*((_QWORD *)v17 + 7);
                  if ( *(__int16 **)(*(_QWORD *)v20 + 8LL) != v20 || *v22 != v20 )
                    __fastfail(3u);
                  *v22 = (__int16 *)v21;
                  *(_QWORD *)(v21 + 8) = v22;
                  *((_QWORD *)v17 + 7) = v17 + 24;
                  *(_QWORD *)v20 = v20;
                  KeLeaveCriticalRegion();
                }
                if ( v17 != (__int16 *)prgnDefault )
                {
                  if ( v17[7] >= 0 )
                  {
                    Win32FreePool(v17);
                  }
                  else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
                  {
                    Win32FreeToPagedLookasideListImpl_0();
                  }
                }
              }
              v24 = 0LL;
              if ( (_DWORD)v25 == 1 )
                RGNOBJ::vDeleteRGNOBJ(&v24);
              return v8;
            }
            v17 = v24;
          }
LABEL_63:
          v8 = 0;
          goto LABEL_64;
        }
        v17 = v24;
      }
    }
    if ( v26 && v28 )
      goto LABEL_63;
    goto LABEL_62;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
