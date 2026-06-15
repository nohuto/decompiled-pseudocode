/*
 * XREFs of ?QueryInterface@CAudioStream@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020480
 * Callers:
 *     ?QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049060 (-QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049070 (-QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::QueryInterface(CAudioStream *this, const struct _GUID *a2, char **a3)
{
  unsigned int v3; // edi
  char *v7; // rsi

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  if ( *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 == *(_QWORD *)&a2->Data1
    && *(_QWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4 == *(_QWORD *)a2->Data4 )
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this;
  }
  else if ( *(_QWORD *)&GUID_ef51cdf8_93d8_4190_a60c_f3c98be5e7bc.Data1 == *(_QWORD *)&a2->Data1
         && *(_QWORD *)GUID_ef51cdf8_93d8_4190_a60c_f3c98be5e7bc.Data4 == *(_QWORD *)a2->Data4 )
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this + 8;
  }
  else
  {
    v7 = (char *)this + 16;
    if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_00000000_0000_0000_c000_000000000046 )
    {
      *a3 = v7;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
  }
  return v3;
}
