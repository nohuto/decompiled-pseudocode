/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C004BDE8
 * Callers:
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C004BF8C (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C004C004 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 * Callees:
 *     ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C004C568 (-RemoveAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C004C59C (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C004C654 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C004C758 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 *a4,
        bool *a5)
{
  int v5; // r13d
  bool v8; // di
  __int64 v9; // r14
  unsigned int v10; // r15d
  int v11; // eax
  bool v12; // cl
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r8
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // xmm0_8
  __int64 v21; // rax
  unsigned int *v22; // r10
  unsigned int v23; // eax
  __int64 v24; // r8
  bool v25; // cf
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // r10
  _DWORD *v31; // r9
  int v32; // r8d
  _DWORD *v33; // rcx
  unsigned int v34; // ecx
  unsigned int v35; // r8d
  unsigned int v36; // edx
  __int64 v37; // r8
  int v38; // r8d
  int v39; // eax
  __int64 v40; // rcx
  __int64 *v41; // rcx
  __int64 v42; // xmm0_8
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  __int64 v46; // rcx
  _DWORD *v47; // r10
  __int64 v48; // [rsp+20h] [rbp-20h] BYREF
  int v49; // [rsp+28h] [rbp-18h]
  __int64 v50; // [rsp+30h] [rbp-10h] BYREF
  int v51; // [rsp+38h] [rbp-8h]
  unsigned int v52; // [rsp+88h] [rbp+48h]

  v52 = a2;
  v5 = 0;
  *a5 = 0;
  v8 = 1;
  if ( a2 != 3 )
  {
    v9 = 0LL;
    v10 = 1;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= *((_DWORD *)a4 + 2)
        || (v18 = *(_DWORD *)a3, v19 = *((_DWORD *)a3 + 1), *(_DWORD *)a3 > v19) )
      {
LABEL_4:
        if ( v5 >= 0 )
        {
          v11 = *((_DWORD *)a4 + 2);
          v12 = v11 && *(_DWORD *)(*(_QWORD *)(*a4 + 8LL * (unsigned int)(v11 - 1)) + 4LL) == -1;
          if ( *(_DWORD *)a3 <= *((_DWORD *)a3 + 1) && !v12 && (a2 == 6 || a2 == 1) )
          {
            v13 = a2;
            v14 = *((unsigned int *)a3 + 2);
            v50 = *a3;
            v15 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, v14, v13, a5);
            v16 = *((unsigned int *)a4 + 2);
            v51 = v15;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v50,
                   v16);
            if ( v5 >= 0 )
              *a5 = 1;
          }
        }
        return (unsigned int)v5;
      }
      v20 = *a3;
      v49 = *((_DWORD *)a3 + 2);
      v21 = *a4;
      v48 = v20;
      v22 = *(unsigned int **)(v21 + 8 * v9);
      if ( v18 < *v22 )
      {
        v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                0LL,
                *((unsigned int *)a3 + 2),
                a2,
                a5);
        v34 = **(_DWORD **)(*a4 + 8 * v9) - 1;
        if ( *((_DWORD *)a3 + 1) < v34 )
          v34 = *((_DWORD *)a3 + 1);
        HIDWORD(v48) = v34;
        if ( v34 == -1 )
          *(_DWORD *)a3 = -1;
        else
          *(_DWORD *)a3 = v34 + 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v48,
               (unsigned int)v9);
        if ( v5 >= 0 )
          goto LABEL_67;
      }
      else
      {
        v23 = v22[1];
        if ( v18 == *v22 )
        {
          v24 = a2;
          v25 = v19 < v23;
          v26 = v19 == v23;
          v27 = *((unsigned int *)a3 + 2);
          v28 = v22[2];
          if ( v25 )
          {
            v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v28, v27, v24, a5);
            v35 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL);
            if ( *((_DWORD *)a3 + 1) < v35 )
              v35 = *((_DWORD *)a3 + 1);
            HIDWORD(v48) = v35;
            if ( v35 == -1 )
              *(_DWORD *)a3 = -1;
            else
              *(_DWORD *)a3 = v35 + 1;
            v36 = v35 + 1;
            v37 = (unsigned int)v9;
            **(_DWORD **)(*a4 + 8 * v9) = v36;
LABEL_65:
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v48,
                   v37);
            if ( v5 < 0 )
              goto LABEL_21;
            v9 = (unsigned int)(v9 + 1);
            ++v10;
LABEL_67:
            *a5 = 1;
            goto LABEL_21;
          }
          if ( v26 )
          {
            v29 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v28, v27, v24, a5);
            *(_DWORD *)(v30 + 8) = v29;
            if ( HIDWORD(v48) == -1 )
              *(_DWORD *)a3 = -1;
            else
              *(_DWORD *)a3 = HIDWORD(v48) + 1;
          }
          else
          {
            v38 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v28, v27, v24, a5);
            v39 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL);
            HIDWORD(v48) = v39;
            if ( v39 == -1 )
              *(_DWORD *)a3 = -1;
            else
              *(_DWORD *)a3 = v39 + 1;
            v40 = *(_QWORD *)(*a4 + 8 * v9);
            *(_QWORD *)v40 = v48;
            *(_DWORD *)(v40 + 8) = v38;
          }
        }
        else
        {
          if ( v19 >= v23 )
          {
            if ( v18 > v23 )
              goto LABEL_21;
            v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                    v22[2],
                    *((unsigned int *)a3 + 2),
                    a2,
                    a5);
            v45 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL);
            HIDWORD(v48) = v45;
            if ( v45 == -1 )
              *(_DWORD *)a3 = -1;
            else
              *(_DWORD *)a3 = v45 + 1;
            v37 = v10;
            *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL) = v48 - 1;
            goto LABEL_65;
          }
          v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                  v22[2],
                  *((unsigned int *)a3 + 2),
                  a2,
                  a5);
          v41 = *(__int64 **)(*a4 + 8 * v9);
          v42 = *v41;
          v51 = *((_DWORD *)v41 + 2);
          HIDWORD(v50) = HIDWORD(v42);
          v43 = HIDWORD(v48) + 1;
          LODWORD(v50) = HIDWORD(v48) + 1;
          if ( HIDWORD(v48) == -1 )
            v43 = -1;
          v44 = v48;
          *(_DWORD *)a3 = v43;
          *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL) = v44 - 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v48,
                 v10);
          if ( v5 >= 0 )
          {
            ++v10;
            *a5 = 1;
            v9 = (unsigned int)(v9 + 1);
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v50,
                   v10);
            if ( v5 >= 0 )
            {
              v9 = (unsigned int)(v9 + 1);
              ++v10;
            }
          }
        }
      }
LABEL_21:
      v31 = *(_DWORD **)(*a4 + 8 * v9);
      v32 = v31[2];
      if ( v32 )
      {
        if ( !(_DWORD)v9 )
          goto LABEL_24;
        v46 = (unsigned int)(v9 - 1);
        v47 = *(_DWORD **)(*a4 + 8 * v46);
        if ( v32 != v47[2] )
          goto LABEL_24;
        *v31 = *v47;
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v46);
        LODWORD(v9) = v9 - 1;
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v9);
        LODWORD(v9) = v9 - 1;
      }
      *a5 = 1;
      --v10;
LABEL_24:
      a2 = v52;
      v9 = (unsigned int)(v9 + 1);
      ++v10;
      if ( v5 < 0 )
        goto LABEL_4;
    }
  }
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    v33 = *(_DWORD **)*a4;
    if ( v33[2] == *((_DWORD *)a3 + 2) && *v33 == *(_DWORD *)a3 )
      v8 = v33[1] != *((_DWORD *)a3 + 1);
  }
  *a5 = v8;
  if ( v8 )
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(a4, 0LL);
    return (unsigned int)CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                           a4,
                           a3,
                           0LL);
  }
  return (unsigned int)v5;
}
