/*
 * XREFs of ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C0049300
 * Callers:
 *     NtCreateImplicitCompositionInputSink @ 0x1C004B600 (NtCreateImplicitCompositionInputSink.c)
 *     NtCreateCompositionInputSink @ 0x1C0080E60 (NtCreateCompositionInputSink.c)
 * Callees:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C0049538 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall _CreateCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, int a2, void **a3)
{
  int v6; // ebx
  __int64 v7; // rsi
  const struct COMPOSITION_INPUT_SINK *v8; // rcx
  char *v9; // rdi
  char *v10; // rdi
  _OWORD v12[18]; // [rsp+30h] [rbp-128h] BYREF
  void *v13; // [rsp+178h] [rbp+20h] BYREF

  v6 = 0;
  v7 = -1LL;
  v13 = (void *)-1LL;
  memset(v12, 0, 0xF8uLL);
  if ( a1 )
  {
    v8 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v8 = (const struct COMPOSITION_INPUT_SINK *)W32UserProbeAddress;
    if ( *(_DWORD *)v8 >= 0xF8u )
    {
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        a1 = (const struct COMPOSITION_INPUT_SINK *)W32UserProbeAddress;
      v12[0] = *(_OWORD *)a1;
      v12[1] = *((_OWORD *)a1 + 1);
      v12[2] = *((_OWORD *)a1 + 2);
      v12[3] = *((_OWORD *)a1 + 3);
      v12[4] = *((_OWORD *)a1 + 4);
      v12[5] = *((_OWORD *)a1 + 5);
      v12[6] = *((_OWORD *)a1 + 6);
      v12[7] = *((_OWORD *)a1 + 7);
      v10 = (char *)a1 + 128;
      v12[8] = *(_OWORD *)v10;
      v12[9] = *((_OWORD *)v10 + 1);
      v12[10] = *((_OWORD *)v10 + 2);
      v12[11] = *((_OWORD *)v10 + 3);
      v12[12] = *((_OWORD *)v10 + 4);
      v12[13] = *((_OWORD *)v10 + 5);
      v12[14] = *((_OWORD *)v10 + 6);
      *(_QWORD *)&v12[15] = *((_QWORD *)v10 + 14);
    }
    else
    {
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        a1 = (const struct COMPOSITION_INPUT_SINK *)W32UserProbeAddress;
      v12[0] = *(_OWORD *)a1;
      v12[1] = *((_OWORD *)a1 + 1);
      v12[2] = *((_OWORD *)a1 + 2);
      v12[3] = *((_OWORD *)a1 + 3);
      v12[4] = *((_OWORD *)a1 + 4);
      v12[5] = *((_OWORD *)a1 + 5);
      v12[6] = *((_OWORD *)a1 + 6);
      v12[7] = *((_OWORD *)a1 + 7);
      v9 = (char *)a1 + 128;
      v12[8] = *(_OWORD *)v9;
      v12[9] = *((_OWORD *)v9 + 1);
      v12[10] = *((_OWORD *)v9 + 2);
      v12[11] = *((_OWORD *)v9 + 3);
      *(_QWORD *)&v12[12] = *((_QWORD *)v9 + 8);
      DWORD2(v12[12]) = 0;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    v6 = CompositionInputObject::KernelCreateCompositionInputSink(
           (const struct COMPOSITION_INPUT_SINK_V2 *)v12,
           a2,
           &v13);
    v7 = (__int64)v13;
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = (void *)v7;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 && v7 != -1 )
    NtClose((HANDLE)v7);
  return (unsigned int)v6;
}
