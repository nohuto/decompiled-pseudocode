/*
 * XREFs of ValidateArgTypes @ 0x1C0011BC0
 * Callers:
 *     Release @ 0x1C0005520 (Release.c)
 *     Acquire @ 0x1C00055F0 (Acquire.c)
 *     While @ 0x1C0005C80 (While.c)
 *     Load @ 0x1C0006210 (Load.c)
 *     LNot @ 0x1C000A2B0 (LNot.c)
 *     DerefOf @ 0x1C000CCE0 (DerefOf.c)
 *     Index @ 0x1C000DC80 (Index.c)
 *     CreateXField @ 0x1C000DF7C (CreateXField.c)
 *     Package @ 0x1C000E850 (Package.c)
 *     ExprOp2_64 @ 0x1C000E9D0 (ExprOp2_64.c)
 *     LogOp2_64 @ 0x1C0011810 (LogOp2_64.c)
 *     IfElse @ 0x1C0011950 (IfElse.c)
 *     Buffer @ 0x1C0020230 (Buffer.c)
 *     OSInterface @ 0x1C0020770 (OSInterface.c)
 *     LogOp2_32 @ 0x1C0020C84 (LogOp2_32.c)
 *     ToInteger @ 0x1C0020DA0 (ToInteger.c)
 *     ExprOp1_64 @ 0x1C00227A8 (ExprOp1_64.c)
 *     Fatal @ 0x1C0046D00 (Fatal.c)
 *     Notify @ 0x1C0046D70 (Notify.c)
 *     ResetSignal @ 0x1C0046E90 (ResetSignal.c)
 *     SleepStall @ 0x1C0046FE0 (SleepStall.c)
 *     Unload @ 0x1C00470C0 (Unload.c)
 *     Concat @ 0x1C0047120 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0047370 (ConcatenateResTemplate.c)
 *     Divide @ 0x1C0047650 (Divide.c)
 *     ExprOp1_32 @ 0x1C00476D8 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C004780C (ExprOp2_32.c)
 *     LoadTable @ 0x1C0047990 (LoadTable.c)
 *     Match_32 @ 0x1C0047DFC (Match_32.c)
 *     Match_64 @ 0x1C0047F30 (Match_64.c)
 *     MidString @ 0x1C0048060 (MidString.c)
 *     ProcessLoadTable @ 0x1C00483D0 (ProcessLoadTable.c)
 *     ToBuffer @ 0x1C0048920 (ToBuffer.c)
 *     ToDecStr @ 0x1C0048990 (ToDecStr.c)
 *     ToHexStr @ 0x1C0048D10 (ToHexStr.c)
 *     ToString @ 0x1C0049000 (ToString.c)
 *     Wait @ 0x1C0049180 (Wait.c)
 * Callees:
 *     ConvertToInteger @ 0x1C0020E10 (ConvertToInteger.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044A2C (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 *     ConvertToBuffer @ 0x1C00492BC (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C00493F0 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C0049480 (ConvertToString.c)
 */

__int64 __fastcall ValidateArgTypes(__int64 a1, char a2, __int64 a3)
{
  unsigned int v4; // r8d
  int v5; // esi
  __int64 v6; // rax
  __int64 v9; // r15
  _WORD *v10; // rdi
  __int64 v11; // r12
  int ObjectTypeName; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax

  v4 = 0;
  v5 = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( *(_BYTE *)(a3 + v6) );
  v9 = (int)v6;
  if ( (int)v6 <= 0 )
    return 0LL;
  v10 = (_WORD *)(a1 + 2);
  v11 = -a3;
  do
  {
    if ( v4 )
      break;
    if ( *(_BYTE *)a3 == 73 )
    {
      if ( *v10 != 1 && (!a2 || (v4 = ConvertToInteger(a1 + 40LL * v5, a1 + 40LL * v5)) != 0) )
      {
        LogError(3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v10);
        v14 = 198;
LABEL_63:
        PrintDebugMessage(v14, v5, ObjectTypeName, 0, 0LL);
        v4 = -1072431096;
      }
    }
    else
    {
      switch ( *(_BYTE *)a3 )
      {
        case 'A':
          if ( *v10 != 129 )
          {
            LogError(3222536201LL);
            v16 = GetObjectTypeName((unsigned __int16)*v10);
            PrintDebugMessage(195, v5, v16, 0, 0LL);
            v4 = -1072431095;
          }
          break;
        case 'B':
          if ( *v10 != 3 && (!a2 || (v4 = ConvertToBuffer(a1 + 40LL * v5, a1 + 40LL * v5)) != 0) )
          {
            LogError(3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v10);
            v14 = 193;
            goto LABEL_63;
          }
          break;
        case 'C':
          if ( (unsigned __int16)(*v10 - 3) > 1u && (!a2 || (v4 = ConvertToBuffer(a1 + 40LL * v5, a1 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            v20 = GetObjectTypeName((unsigned __int16)*v10);
            PrintDebugMessage(194, v5, v20, 0, 0LL);
            v4 = -1072431095;
          }
          break;
        case 'D':
          if ( (unsigned __int16)(*v10 - 1) > 2u
            && (!a2 || (v4 = ConvertToInteger(a1 + 40LL * v5, a1 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            v17 = GetObjectTypeName((unsigned __int16)*v10);
            PrintDebugMessage(199, v5, v17, 0, 0LL);
            v4 = -1072431095;
          }
          break;
        case 'E':
          if ( (unsigned __int16)(*v10 - 1) > 2u
            && *v10 != 15
            && (!a2 || (v4 = ConvertToInteger(a1 + 40LL * v5, a1 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            v18 = GetObjectTypeName((unsigned __int16)*v10);
            PrintDebugMessage(200, v5, v18, 0, 0LL);
            v4 = -1072431095;
          }
          break;
        case 'F':
          if ( *v10 != 5 )
          {
            LogError(3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v10);
            v14 = 197;
            goto LABEL_63;
          }
          break;
        case 'H':
          if ( *v10 == 1 )
          {
            if ( !a2 || (v4 = ConvertToDDBHandle(a1 + 40LL * v5, a1 + 40LL * v5)) != 0 )
            {
              LogError(3222536201LL);
              v21 = GetObjectTypeName((unsigned __int16)*v10);
              PrintDebugMessage(196, v5, v21, 0, 0LL);
              v4 = -1072431095;
            }
          }
          else if ( *v10 != 15 )
          {
            LogError(3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v10);
            v14 = 196;
            goto LABEL_63;
          }
          break;
        case 'O':
          if ( *v10 != 128 )
          {
            LogError(3222536201LL);
            v15 = GetObjectTypeName((unsigned __int16)*v10);
            PrintDebugMessage(201, v5, v15, 0, 0LL);
            v4 = -1072431095;
          }
          break;
        case 'P':
          if ( *v10 != 4 )
          {
            LogError(3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v10);
            v14 = 202;
            goto LABEL_63;
          }
          break;
        case 'R':
          if ( (unsigned __int16)(*v10 - 128) > 1u && *v10 != 14 )
          {
            LogError(3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v10);
            v14 = 203;
            goto LABEL_63;
          }
          break;
        case 'T':
          if ( (unsigned __int16)(*v10 - 2) > 1u && (!a2 || (v4 = ConvertToBuffer(a1 + 40LL * v5, a1 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            v19 = GetObjectTypeName((unsigned __int16)*v10);
            PrintDebugMessage(204, v5, v19, 0, 0LL);
            v4 = -1072431095;
          }
          break;
        case 'U':
          break;
        case 'Z':
          if ( *v10 != 2 && (!a2 || (v4 = ConvertToString(a1 + 40LL * v5, 0LL, a1 + 40LL * v5)) != 0) )
          {
            LogError(3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v10);
            v14 = 205;
            goto LABEL_63;
          }
          break;
        default:
          LogError(3222536195LL);
          PrintDebugMessage(206, *(char *)a3, 0, 0, 0LL);
          v4 = -1072431101;
          break;
      }
    }
    ++a3;
    ++v5;
    v10 += 20;
  }
  while ( v11 + a3 < v9 );
  return v4;
}
