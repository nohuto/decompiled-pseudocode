/*
 * XREFs of ?QueryInterface@CAudioStream@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001DD70
 * Callers:
 *     ?QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044E20 (-QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044E30 (-QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::QueryInterface(CAudioStream *this, const struct _GUID *a2, char **a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // r14
  __int64 v9; // rax

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  v6 = *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 == *(_QWORD *)&a2->Data1 )
    v6 = *(_QWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4 - *(_QWORD *)a2->Data4;
  if ( v6 )
  {
    v7 = *(_QWORD *)&GUID_ef51cdf8_93d8_4190_a60c_f3c98be5e7bc.Data1 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)&GUID_ef51cdf8_93d8_4190_a60c_f3c98be5e7bc.Data1 == *(_QWORD *)&a2->Data1 )
      v7 = *(_QWORD *)GUID_ef51cdf8_93d8_4190_a60c_f3c98be5e7bc.Data4 - *(_QWORD *)a2->Data4;
    if ( v7 )
    {
      v8 = (char *)this + 16;
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
      if ( v9 )
      {
        *a3 = 0LL;
        return (unsigned int)-2147467262;
      }
      else
      {
        *a3 = v8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    else
    {
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
    }
  }
  else
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this;
  }
  return v3;
}
