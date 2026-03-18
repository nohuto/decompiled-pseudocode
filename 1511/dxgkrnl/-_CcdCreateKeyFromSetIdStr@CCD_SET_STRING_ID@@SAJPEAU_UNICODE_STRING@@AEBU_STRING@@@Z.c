/*
 * XREFs of ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C005EE74
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C005D724 (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C005E190 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C005E674 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C005E650 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C005EF9C (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(struct _UNICODE_STRING *a1, const struct _STRING *a2)
{
  USHORT Length; // si
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  wchar_t *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  wchar_t *Buffer; // rax
  int Md5Checksum; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _STRING SourceString; // [rsp+20h] [rbp-38h] BYREF

  Length = a2->Length;
  if ( a2->Length >= 0x80u )
    Length = 128;
  v5 = (unsigned __int16)(Length + 34);
  v6 = 2 * v5;
  if ( !is_mul_ok(v5, 2uLL) )
    v6 = -1LL;
  v7 = (wchar_t *)operator new[](v6, 0x63644356u, PagedPool);
  a1->Buffer = v7;
  if ( v7 )
  {
    memset(v7, 0, 2 * v5);
    a1->Length = 0;
    SourceString.Length = Length;
    a1->MaximumLength = 2 * (Length + 1);
    SourceString.Buffer = a2->Buffer;
    SourceString.MaximumLength = Length;
    v12 = RtlAnsiStringToUnicodeString(a1, &SourceString, 0);
    v14 = v12;
    if ( v12 < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13);
      v21[3] = v14;
      v21[4] = a2;
      v21[5] = a2->Length;
      v21[6] = Length;
      v21[7] = a1->MaximumLength;
      WdLogEvent5_WdAssertion(v21);
      CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
      return (unsigned int)v14;
    }
    else
    {
      Buffer = a1->Buffer;
      a1->MaximumLength = 2 * (Length + 34);
      Buffer[Length] = 94;
      Md5Checksum = CcdCreateMd5Checksum((const unsigned __int8 *)a2->Buffer, a2->Length, &a1->Buffer[Length + 1]);
      v18 = Md5Checksum;
      if ( Md5Checksum < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17);
        v22[3] = v18;
        v22[4] = a2;
        v22[5] = a2->Buffer;
        v22[6] = a2->Length;
        WdLogEvent5_WdAssertion(v22);
        CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
        return (unsigned int)v18;
      }
      else
      {
        a1->Length = a1->MaximumLength - 2;
        return 0LL;
      }
    }
  }
  else
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    v20[3] = a2;
    v20[4] = a2->Length;
    v20[5] = v5;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
}
