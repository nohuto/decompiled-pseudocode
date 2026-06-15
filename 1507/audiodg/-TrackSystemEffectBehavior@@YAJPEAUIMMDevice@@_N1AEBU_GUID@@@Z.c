/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z @ 0x140002AE0
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z @ 0x140002FAC (-TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF__guid_ @ 0x140030B28 (WPP_SF__guid_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TrackSystemEffectBehavior(struct IMMDevice *a1, char a2, char a3, struct _GUID *a4)
{
  int v7; // esi
  __int128 v8; // xmm0
  int v9; // eax
  unsigned int v11; // ebx
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  PROPVARIANT pvar; // [rsp+28h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h]
  __int64 v15; // [rsp+38h] [rbp-38h]
  LPOLESTR lpsz[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+60h] [rbp-10h]

  lpsz[1] = (LPOLESTR)-2LL;
  v12 = 0LL;
  pvar = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 2LL, &v12);
  if ( v7 >= 0 )
  {
    if ( a2 )
    {
      v8 = PKEY_Endpoint_LFX_FailCount;
      v9 = 9;
    }
    else
    {
      v8 = PKEY_Endpoint_GFX_FailCount;
      v9 = 8;
    }
    v18 = v9;
    v17 = v8;
    v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(v12, &v17, &pvar);
    if ( a3 )
    {
      if ( (_WORD)pvar == 19 && !(_DWORD)v14 || !(_WORD)pvar )
        goto LABEL_7;
      LOWORD(pvar) = 19;
      LODWORD(v14) = 0;
    }
    else if ( (_WORD)pvar == 19 )
    {
      LODWORD(v14) = v14 + 1;
      if ( (_DWORD)v14 == 10 )
      {
        v11 = a4->Data1 + *(_DWORD *)a4->Data4 + (*(_QWORD *)&a4->Data1 + *(_QWORD *)a4->Data4) / 0xFFFFFFFFuLL;
        lpsz[0] = 0LL;
        StringFromCLSID(a4, lpsz);
        WerRegisterMemoryBlock(a4, 0x10u);
        if ( lpsz[0] )
        {
          ShipAssertMsgW(47105LL, v11);
          CoTaskMemFree(lpsz[0]);
        }
        else
        {
          ShipAssert(47105LL, v11);
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF__guid_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            11LL,
            &WPP_2bda92312337278facb79c049a01aa8d_Traceguids,
            a4);
        }
      }
    }
    else
    {
      LOWORD(pvar) = 19;
      LODWORD(v14) = 1;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v12 + 48LL))(v12, &v17, &pvar);
  }
LABEL_7:
  PropVariantClear(&pvar);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v7;
}
