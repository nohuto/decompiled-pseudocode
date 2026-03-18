/*
 * XREFs of ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18016CA6C
 * Callers:
 *     ?CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180145180 (-CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractio.c)
 *     ?CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180170BA0 (-CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUIntera.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x18000DE50 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchInteractionConfigurationPrimitive@@I@Z @ 0x1800A5944 (-AddMultipleAndSet@-$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTou.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18016B83C (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x18016C9A4 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _DWORD *a8)
{
  _DWORD *v10; // r8
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // rax
  _DWORD *v15; // rdi
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // r8d
  int v19; // r10d
  __int64 v20; // rax
  unsigned int v21; // r8d
  int v22; // r9d
  int v23; // ebx
  int v24; // r9d
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // eax
  _DWORD *v30; // [rsp+40h] [rbp-38h] BYREF
  int v31; // [rsp+48h] [rbp-30h] BYREF
  int v32; // [rsp+4Ch] [rbp-2Ch] BYREF
  int v33; // [rsp+50h] [rbp-28h] BYREF
  int v34; // [rsp+54h] [rbp-24h]
  int v35; // [rsp+58h] [rbp-20h]

  v10 = a2;
  *a4 = 0;
  *a6 = 0;
  v11 = 0;
  *a8 = 0;
  v12 = *(_DWORD *)(a1 + 388);
  if ( v12 == 1 )
  {
    v13 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            a1,
            (char *)a1,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  else
  {
    if ( v12 != 2 )
      goto LABEL_6;
    v13 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            a1,
            (char *)(a1 + 152),
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  v11 = v13;
  if ( v13 < 0 )
    return (unsigned int)v11;
LABEL_6:
  if ( (*(_BYTE *)(a1 + 856) & 3) == 0 )
    return (unsigned int)v11;
  v14 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                    WPF::g_pProcessHeap,
                    72LL,
                    v10);
  v15 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 0x48uLL);
    *((_QWORD *)v15 + 1) = 0LL;
    *((_QWORD *)v15 + 2) = 0LL;
    *((_QWORD *)v15 + 3) = 0LL;
    v15[8] = 0;
    *((_QWORD *)v15 + 5) = 0LL;
    *((_QWORD *)v15 + 6) = 0LL;
    *((_QWORD *)v15 + 7) = 0LL;
    v15[16] = 0;
    v30 = v15;
  }
  else
  {
    v15 = 0LL;
    v30 = 0LL;
  }
  if ( !v15 )
    v11 = -2147024882;
  if ( v11 < 0 )
    goto LABEL_35;
  *v15 = *(_DWORD *)(a1 + 312);
  v30[1] = *(_DWORD *)(a1 + 316);
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v30 + 2), 0xCu, *(_DWORD *)(a1 + 344), *(_QWORD *)(a1 + 320));
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v30 + 10), 0xCu, *(_DWORD *)(a1 + 376), *(_QWORD *)(a1 + 352));
  anonymous_namespace_::GetTemporaryConfigWithMask(a1 + 896, &v31, &v32);
  v16 = v32;
  if ( !v32 )
    goto LABEL_26;
  v15 = v30;
  if ( !v30[8] )
  {
    v34 = -1;
    v33 = 1;
    v35 = 0;
    v15 = v30;
    v11 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(v30 + 2), &v33, 1u);
  }
  if ( v11 >= 0 )
  {
    if ( !v15[16] )
    {
      v34 = -1;
      v33 = 1;
      v35 = 0;
      v17 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(v15 + 10), &v33, 1u);
      v15 = v30;
      v11 = v17;
    }
    if ( v11 >= 0 )
    {
      v18 = 0;
      if ( v15[8] )
      {
        v19 = v31 & v16;
        do
        {
          v20 = v18++;
          *(_DWORD *)(*((_QWORD *)v15 + 1) + 12 * v20 + 8) = v19 | *(_DWORD *)(*((_QWORD *)v15 + 1) + 12 * v20 + 8) & ~v16;
          v15 = v30;
        }
        while ( v18 < v30[8] );
      }
      v21 = 0;
      if ( v15[16] )
      {
        v22 = v16;
        v23 = v31 & v16;
        v24 = ~v22;
        do
        {
          v25 = v21++;
          *(_DWORD *)(*((_QWORD *)v15 + 5) + 12 * v25 + 8) = v23 | *(_DWORD *)(*((_QWORD *)v15 + 5) + 12 * v25 + 8) & v24;
          v15 = v30;
        }
        while ( v21 < v30[16] );
      }
LABEL_26:
      v26 = *(_DWORD *)(a7 + 24);
      v27 = v26 + 1;
      if ( v26 + 1 >= v26 )
      {
        v11 = 0;
        if ( v27 <= *(_DWORD *)(a7 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a7 + 8LL * *(unsigned int *)(a7 + 24)) = v30;
          *(_DWORD *)(a7 + 24) = v27;
LABEL_33:
          ++*a8;
          return (unsigned int)v11;
        }
        v28 = DynArrayImpl<0>::AddMultipleAndSet(a7, 8u, 1, &v30);
        v11 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
      }
      else
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v11 >= 0 )
        goto LABEL_33;
      v15 = v30;
    }
  }
LABEL_35:
  if ( v15 )
    InteractionConfigurationGroup::`scalar deleting destructor'((InteractionConfigurationGroup *)v15);
  return (unsigned int)v11;
}
