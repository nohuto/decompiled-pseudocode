/*
 * XREFs of ValidateArgTypes @ 0x1C00182D0
 * Callers:
 *     Load @ 0x1C0006050 (Load.c)
 *     While @ 0x1C000CAE0 (While.c)
 *     Index @ 0x1C0013FA0 (Index.c)
 *     CreateXField @ 0x1C0014688 (CreateXField.c)
 *     IfElse @ 0x1C0017FE0 (IfElse.c)
 *     LogOp2 @ 0x1C0018490 (LogOp2.c)
 *     ExprOp2_64 @ 0x1C0018F80 (ExprOp2_64.c)
 *     Package @ 0x1C0019770 (Package.c)
 *     DerefOf @ 0x1C001EF00 (DerefOf.c)
 *     Acquire @ 0x1C0020960 (Acquire.c)
 *     ExprOp1_64 @ 0x1C00250B8 (ExprOp1_64.c)
 *     OSInterface @ 0x1C0025230 (OSInterface.c)
 *     LogOp2_32 @ 0x1C0025478 (LogOp2_32.c)
 *     LNot @ 0x1C00255C0 (LNot.c)
 *     Buffer @ 0x1C0026AA0 (Buffer.c)
 *     ToInteger @ 0x1C0027A70 (ToInteger.c)
 *     Release @ 0x1C0028520 (Release.c)
 *     Fatal @ 0x1C005E4F0 (Fatal.c)
 *     Notify @ 0x1C005E560 (Notify.c)
 *     ResetSignal @ 0x1C005E690 (ResetSignal.c)
 *     SleepStall @ 0x1C005E7F0 (SleepStall.c)
 *     Unload @ 0x1C005E8E0 (Unload.c)
 *     Concat @ 0x1C005E940 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C005EC30 (ConcatenateResTemplate.c)
 *     Divide @ 0x1C005EF40 (Divide.c)
 *     ExprOp1_32 @ 0x1C005EFD0 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C005F108 (ExprOp2_32.c)
 *     LoadTable @ 0x1C005F290 (LoadTable.c)
 *     Match_32 @ 0x1C005F798 (Match_32.c)
 *     Match_64 @ 0x1C005F8CC (Match_64.c)
 *     MidString @ 0x1C005FA00 (MidString.c)
 *     ProcessLoadTable @ 0x1C005FDA0 (ProcessLoadTable.c)
 *     ToBuffer @ 0x1C0060340 (ToBuffer.c)
 *     ToDecStr @ 0x1C00603C0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0060760 (ToHexStr.c)
 *     ToString @ 0x1C0060A70 (ToString.c)
 *     Wait @ 0x1C0060C40 (Wait.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ConvertToInteger @ 0x1C0027AE4 (ConvertToInteger.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 *     ConvertToBuffer @ 0x1C0060D94 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C0060EC8 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C0060F58 (ConvertToString.c)
 */

__int64 __fastcall ValidateArgTypes(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int v5; // esi
  unsigned int v6; // r9d
  __int64 v8; // rax
  __int64 v11; // r12
  _WORD *v12; // rdi
  __int64 v13; // r13
  int ObjectTypeName; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  v5 = 0;
  v6 = 0;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_BYTE *)(a4 + v8) );
  v11 = (int)v8;
  if ( (int)v8 <= 0 )
    return 0LL;
  v12 = (_WORD *)(a2 + 2);
  v13 = -a4;
  do
  {
    if ( v6 )
      break;
    if ( *(_BYTE *)a4 == 73 )
    {
      if ( *v12 != 1 && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
      {
        LogError(3222536200LL);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
        v16 = 198;
LABEL_63:
        PrintDebugMessage(v16, v5, ObjectTypeName, 0, 0LL);
        v6 = -1072431096;
      }
    }
    else
    {
      switch ( *(_BYTE *)a4 )
      {
        case 'A':
          if ( *v12 != 129 )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v18 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(195, v5, v18, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'B':
          if ( *v12 != 3 && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 193;
            goto LABEL_63;
          }
          break;
        case 'C':
          if ( (unsigned __int16)(*v12 - 3) > 1u && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v22 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(194, v5, v22, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'D':
          if ( (unsigned __int16)(*v12 - 1) > 2u
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v19 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(199, v5, v19, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'E':
          if ( (unsigned __int16)(*v12 - 1) > 2u
            && *v12 != 15
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v20 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(200, v5, v20, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'F':
          if ( *v12 != 5 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 197;
            goto LABEL_63;
          }
          break;
        case 'H':
          if ( *v12 == 1 )
          {
            if ( !a3 || (v6 = ConvertToDDBHandle(a2 + 40LL * v5, a2 + 40LL * v5)) != 0 )
            {
              LogError(3222536201LL);
              AcpiDiagTraceAmlError(a1, 3222536201LL);
              v23 = GetObjectTypeName((unsigned __int16)*v12);
              PrintDebugMessage(196, v5, v23, 0, 0LL);
              v6 = -1072431095;
            }
          }
          else if ( *v12 != 15 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 196;
            goto LABEL_63;
          }
          break;
        case 'O':
          if ( *v12 != 128 )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v17 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(201, v5, v17, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'P':
          if ( *v12 != 4 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 202;
            goto LABEL_63;
          }
          break;
        case 'R':
          if ( (unsigned __int16)(*v12 - 128) > 1u && *v12 != 14 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 203;
            goto LABEL_63;
          }
          break;
        case 'T':
          if ( (unsigned __int16)(*v12 - 2) > 1u && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v21 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(204, v5, v21, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'U':
          break;
        case 'Z':
          if ( *v12 != 2 && (!a3 || (v6 = ConvertToString(a2 + 40LL * v5, 0LL, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 205;
            goto LABEL_63;
          }
          break;
        default:
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(a1, 3222536195LL);
          PrintDebugMessage(206, *(char *)a4, 0, 0, 0LL);
          v6 = -1072431101;
          break;
      }
    }
    ++a4;
    ++v5;
    v12 += 20;
  }
  while ( a4 + v13 < v11 );
  return v6;
}
