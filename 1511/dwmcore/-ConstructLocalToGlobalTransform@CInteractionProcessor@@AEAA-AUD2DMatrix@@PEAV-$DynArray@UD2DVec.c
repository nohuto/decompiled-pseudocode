/*
 * XREFs of ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x180141D70
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180140704 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ConvertVectorArrayToMatrix@?A0xe8837992@@YA?AUD2DMatrix@@PEAUD2DVector3@@@Z @ 0x1800BDA14 (-ConvertVectorArrayToMatrix@-A0xe8837992@@YA-AUD2DMatrix@@PEAUD2DVector3@@@Z.c)
 *     ?CanAddThisColumnVectorToMatrix@?A0xe8837992@@YA_NPEAUD2DVector3@@IAEBU2@@Z @ 0x18014187C (-CanAddThisColumnVectorToMatrix@-A0xe8837992@@YA_NPEAUD2DVector3@@IAEBU2@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ConstructLocalToGlobalTransform(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        const struct D2DVector3 *a4)
{
  unsigned int v7; // r14d
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v19[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v22; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 **v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  unsigned int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  __int64 v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  __int64 v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  __int64 v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  __int64 v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  __int64 v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  __int64 v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  __int64 v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  __int64 v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]

  v24 = 0;
  v7 = 0;
  v8 = *((_DWORD *)a3 + 6) - 1;
  v9 = v8;
  memset(v23, 0, sizeof(v23));
  if ( v8 >= 0 )
  {
    v10 = 12LL * v8;
    do
    {
      if ( v7 >= 3 )
        break;
      v11 = *a3;
      v12 = *(_DWORD *)(v10 + *a3 + 8);
      *(_QWORD *)v19 = *(_QWORD *)(v10 + *a3);
      v20 = v12;
      if ( `anonymous namespace'::CanAddThisColumnVectorToMatrix(
             (_anonymous_namespace_ *)v23,
             (struct D2DVector3 *)v7,
             (const struct D2DVector3 *)v19,
             a4) )
      {
        v13 = v7++;
        v14 = 3 * v13;
        LODWORD(v13) = *(_DWORD *)(v10 + v11 + 8);
        *(_QWORD *)((char *)v23 + 4 * v14) = *(_QWORD *)(v10 + v11);
        *((_DWORD *)v23 + v14 + 2) = v13;
      }
      v10 -= 12LL;
      --v9;
    }
    while ( v9 >= 0 );
  }
  `anonymous namespace'::ConvertVectorArrayToMatrix(a2, (int *)v23);
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 2) != 0 && (qword_18019E958 & 2) == qword_18019E958 )
  {
    v22 = a1;
    v26 = &v22;
    v21 = *a1;
    v28 = &v21;
    *(_QWORD *)v19 = a1[17];
    v30 = v19;
    v18 = *((_DWORD *)a1 + 89);
    v32 = &v18;
    v36 = a2 + 4;
    v38 = a2 + 8;
    v40 = a2 + 16;
    v42 = a2 + 20;
    v44 = a2 + 24;
    v46 = a2 + 32;
    v48 = a2 + 36;
    v27 = 8LL;
    v29 = 8LL;
    v31 = 8LL;
    v33 = 4LL;
    v34 = a2;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v50 = a2 + 40;
    v51 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017E7B8, v15, v16, 0xFu, &pData);
  }
  return a2;
}
