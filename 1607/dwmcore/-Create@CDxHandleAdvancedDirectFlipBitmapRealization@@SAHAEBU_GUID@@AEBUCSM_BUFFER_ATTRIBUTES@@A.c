/*
 * XREFs of ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800B271C
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180099754 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180055388 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x18018ED68 (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBU.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct _LUID a4,
        struct CBitmapRealization **a5)
{
  int v8; // ebx
  CDxHandleAdvancedDirectFlipBitmapRealization *v10; // rcx
  CDxHandleAdvancedDirectFlipBitmapRealization *v11; // rdi
  int v12; // eax
  int v13; // eax

  *a5 = 0LL;
  if ( (*((_DWORD *)a2 + 29) & 0x200) != 0 )
  {
    if ( *((_DWORD *)a2 + 11) )
    {
      v8 = -2003292288;
      MilInstrumentationCheckHR(0x14u, &dword_1801AD990, 2u, -2003292288, 0x2Au);
    }
    else
    {
      v10 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                              WPF::g_pProcessHeap,
                                                              480LL);
      if ( v10 )
        v11 = CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
                v10,
                a1,
                a2,
                a3,
                a4);
      else
        v11 = 0LL;
      if ( v11 )
      {
        (*(void (__fastcall **)(CDxHandleAdvancedDirectFlipBitmapRealization *))(*(_QWORD *)v11 + 8LL))(v11);
        v12 = CDxHandleBitmapRealization::Initialize(v11);
        v8 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801AD990, 2u, v12, 0x34u);
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v11 + 14) + 40LL))((__int64)v11 + 112);
          if ( v13 == 28 || v13 == 87 )
            v8 = 0;
          else
            v8 = -2003292288;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801AD990, 2u, v8, 0x36u);
          }
          else
          {
            *a5 = v11;
            v11 = 0LL;
          }
        }
        if ( v8 < 0 )
        {
          if ( !v11 )
            return (unsigned int)v8;
          *((_QWORD *)v11 + 32) = 0LL;
        }
        if ( v11 )
          (*(void (__fastcall **)(CDxHandleAdvancedDirectFlipBitmapRealization *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      else
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR(0x14u, &dword_1801AD990, 2u, -2147024882, 0x31u);
      }
    }
  }
  else
  {
    v8 = -2003292287;
    MilInstrumentationCheckHR(0x14u, &dword_1801AD990, 2u, -2003292287, 0x25u);
  }
  return (unsigned int)v8;
}
