/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C00DA0F0
 * Callers:
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEAUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00D9FB8 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEAU.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEAUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00DA054 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEAUD.c)
 * Callees:
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C004F4D0 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C004F588 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00D9EF8 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C00E0528 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
        __int64 a1,
        int a2,
        int *a3,
        __int64 a4,
        bool *a5)
{
  int v5; // r13d
  bool v8; // di
  _DWORD *v9; // rcx
  __int64 v10; // r14
  unsigned int v11; // r15d
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // xmm0_8
  _DWORD **v15; // rax
  unsigned int *v16; // r10
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // r8d
  bool v20; // cf
  bool v21; // zf
  unsigned int v22; // edx
  int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned int v26; // r8d
  int v27; // eax
  __int64 v28; // r10
  int v29; // r8d
  int v30; // eax
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // xmm0_8
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  _DWORD *v37; // r9
  int v38; // r8d
  __int64 v39; // rcx
  _DWORD *v40; // r10
  int v41; // eax
  bool v42; // cl
  int v43; // r8d
  unsigned int v44; // edx
  int v45; // eax
  unsigned int v46; // r8d
  __int64 v48; // [rsp+20h] [rbp-20h] BYREF
  int v49; // [rsp+28h] [rbp-18h]
  __int64 v50; // [rsp+30h] [rbp-10h] BYREF
  int v51; // [rsp+38h] [rbp-8h]
  int v52; // [rsp+88h] [rbp+48h]

  v52 = a2;
  v5 = 0;
  *a5 = 0;
  v8 = 1;
  if ( a2 == 3 )
  {
    if ( *(_DWORD *)(a4 + 8) == 1 )
    {
      v9 = **(_DWORD ***)a4;
      if ( v9[2] == a3[2] && *v9 == *a3 )
        v8 = v9[1] != a3[1];
    }
    *a5 = v8;
    if ( v8 )
    {
      CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(a4, 0LL);
      return (unsigned int)CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                             a4,
                             (__int64)a3,
                             0);
    }
    return (unsigned int)v5;
  }
  v10 = 0LL;
  v11 = 1;
  do
  {
    if ( (unsigned int)v10 >= *(_DWORD *)(a4 + 8) )
      break;
    v12 = *a3;
    v13 = a3[1];
    if ( *a3 > v13 )
      break;
    v14 = *(_QWORD *)a3;
    v49 = a3[2];
    v15 = *(_DWORD ***)a4;
    v48 = v14;
    v16 = v15[v10];
    if ( v12 >= *v16 )
    {
      v18 = v16[1];
      if ( v12 == *v16 )
      {
        v19 = a2;
        v20 = v13 < v18;
        v21 = v13 == v18;
        v22 = a3[2];
        v23 = v16[2];
        if ( v20 )
        {
          v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v23, v22, v19, a5);
          v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8 * v10) + 4LL);
          if ( a3[1] < v24 )
            v24 = a3[1];
          HIDWORD(v48) = v24;
          if ( v24 == -1 )
            *a3 = -1;
          else
            *a3 = v24 + 1;
          v25 = v24 + 1;
          v26 = v10;
          **(_DWORD **)(*(_QWORD *)a4 + 8 * v10) = v25;
LABEL_46:
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 (__int64)&v48,
                 v26);
          if ( v5 < 0 )
            goto LABEL_49;
          v10 = (unsigned int)(v10 + 1);
          ++v11;
LABEL_48:
          *a5 = 1;
          goto LABEL_49;
        }
        if ( v21 )
        {
          v27 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v23, v22, v19, a5);
          *(_DWORD *)(v28 + 8) = v27;
          if ( HIDWORD(v48) == -1 )
            *a3 = -1;
          else
            *a3 = HIDWORD(v48) + 1;
        }
        else
        {
          v29 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v23, v22, v19, a5);
          v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8 * v10) + 4LL);
          HIDWORD(v48) = v30;
          if ( v30 == -1 )
            *a3 = -1;
          else
            *a3 = v30 + 1;
          v31 = *(_QWORD *)(*(_QWORD *)a4 + 8 * v10);
          *(_QWORD *)v31 = v48;
          *(_DWORD *)(v31 + 8) = v29;
        }
      }
      else
      {
        if ( v13 >= v18 )
        {
          if ( v12 > v18 )
            goto LABEL_49;
          v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v16[2], a3[2], a2, a5);
          v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8 * v10) + 4LL);
          HIDWORD(v48) = v36;
          if ( v36 == -1 )
            *a3 = -1;
          else
            *a3 = v36 + 1;
          v26 = v11;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8 * v10) + 4LL) = v48 - 1;
          goto LABEL_46;
        }
        v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v16[2], a3[2], a2, a5);
        v32 = *(__int64 **)(*(_QWORD *)a4 + 8 * v10);
        v33 = *v32;
        v51 = *((_DWORD *)v32 + 2);
        HIDWORD(v50) = HIDWORD(v33);
        v34 = HIDWORD(v48) + 1;
        LODWORD(v50) = HIDWORD(v48) + 1;
        if ( HIDWORD(v48) == -1 )
          v34 = -1;
        v35 = v48;
        *a3 = v34;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8 * v10) + 4LL) = v35 - 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               (__int64)&v48,
               v11);
        if ( v5 >= 0 )
        {
          ++v11;
          *a5 = 1;
          v10 = (unsigned int)(v10 + 1);
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 (__int64)&v50,
                 v11);
          if ( v5 >= 0 )
          {
            v10 = (unsigned int)(v10 + 1);
            ++v11;
          }
        }
      }
    }
    else
    {
      v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0, a3[2], a2, a5);
      v17 = **(_DWORD **)(*(_QWORD *)a4 + 8 * v10) - 1;
      if ( a3[1] < v17 )
        v17 = a3[1];
      HIDWORD(v48) = v17;
      if ( v17 == -1 )
        *a3 = -1;
      else
        *a3 = v17 + 1;
      v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
             a4,
             (__int64)&v48,
             v10);
      if ( v5 >= 0 )
        goto LABEL_48;
    }
LABEL_49:
    v37 = *(_DWORD **)(*(_QWORD *)a4 + 8 * v10);
    v38 = v37[2];
    if ( v38 )
    {
      if ( !(_DWORD)v10 )
        goto LABEL_55;
      v39 = (unsigned int)(v10 - 1);
      v40 = *(_DWORD **)(*(_QWORD *)a4 + 8 * v39);
      if ( v38 != v40[2] )
        goto LABEL_55;
      *v37 = *v40;
      CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(a4, (unsigned int)v39);
      LODWORD(v10) = v10 - 1;
    }
    else
    {
      CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(a4, (unsigned int)v10);
      LODWORD(v10) = v10 - 1;
    }
    *a5 = 1;
    --v11;
LABEL_55:
    a2 = v52;
    v10 = (unsigned int)(v10 + 1);
    ++v11;
  }
  while ( v5 >= 0 );
  if ( v5 >= 0 )
  {
    v41 = *(_DWORD *)(a4 + 8);
    v42 = v41 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8LL * (unsigned int)(v41 - 1)) + 4LL) == -1;
    if ( *a3 <= (unsigned int)a3[1] && !v42 && (a2 == 1 || a2 == 6) )
    {
      v43 = a2;
      v44 = a3[2];
      v50 = *(_QWORD *)a3;
      v45 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0, v44, v43, a5);
      v46 = *(_DWORD *)(a4 + 8);
      v51 = v45;
      v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
             a4,
             (__int64)&v50,
             v46);
      if ( v5 >= 0 )
        *a5 = 1;
    }
  }
  return (unsigned int)v5;
}
