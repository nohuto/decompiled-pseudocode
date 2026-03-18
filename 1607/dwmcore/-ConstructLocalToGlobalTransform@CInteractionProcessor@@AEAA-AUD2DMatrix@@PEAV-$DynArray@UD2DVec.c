/*
 * XREFs of ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x18016DA0C
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18016BFA8 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _anonymous_namespace_::ConvertVectorArrayToMatrix @ 0x1800C11D4 (_anonymous_namespace_--ConvertVectorArrayToMatrix.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18016D42C (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 */

__int64 __fastcall CInteractionProcessor::ConstructLocalToGlobalTransform(__int64 *a1, __int64 a2, __int64 *a3)
{
  unsigned int v6; // r14d
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  __int64 *v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 **v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int64 v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  __int64 v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  __int64 v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  __int64 v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  __int64 v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]

  v23 = 0;
  v6 = 0;
  v7 = *((_DWORD *)a3 + 6) - 1;
  v8 = v7;
  memset(v22, 0, sizeof(v22));
  if ( v7 >= 0 )
  {
    v9 = 12LL * v7;
    do
    {
      if ( v6 >= 3 )
        break;
      v10 = *a3;
      v11 = *(_DWORD *)(v9 + *a3 + 8);
      v18 = *(_QWORD *)(v9 + *a3);
      v19 = v11;
      if ( anonymous_namespace_::CanAddThisColumnVectorToMatrix((__int64)v22, v6, (const struct D2DVector3 *)&v18) )
      {
        v12 = v6++;
        v13 = 3 * v12;
        LODWORD(v12) = *(_DWORD *)(v9 + v10 + 8);
        *(_QWORD *)((char *)v22 + 4 * v13) = *(_QWORD *)(v9 + v10);
        *((_DWORD *)v22 + v13 + 2) = v12;
      }
      v9 -= 12LL;
      --v8;
    }
    while ( v8 >= 0 );
  }
  anonymous_namespace_::ConvertVectorArrayToMatrix(a2, (int *)v22);
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v20 = a1;
    v25 = &v20;
    v21 = *a1;
    v27 = &v21;
    v18 = a1[19];
    v29 = &v18;
    v17 = *((_DWORD *)a1 + 97);
    v31 = &v17;
    v35 = a2 + 4;
    v37 = a2 + 8;
    v39 = a2 + 16;
    v41 = a2 + 20;
    v43 = a2 + 24;
    v45 = a2 + 32;
    v47 = a2 + 36;
    v26 = 8LL;
    v28 = 8LL;
    v30 = 8LL;
    v32 = 4LL;
    v33 = a2;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v49 = a2 + 40;
    v50 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5BB8, v14, v15, 0xFu, &pData);
  }
  return a2;
}
