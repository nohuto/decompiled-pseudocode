/*
 * XREFs of ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C004BA6C
 * Callers:
 *     NtCreateImplicitCompositionInputSink @ 0x1C004D760 (NtCreateImplicitCompositionInputSink.c)
 *     NtCreateCompositionInputSink @ 0x1C004E280 (NtCreateCompositionInputSink.c)
 * Callees:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C004BCA8 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall _CreateCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, int a2, void **a3)
{
  const struct COMPOSITION_INPUT_SINK *v4; // rdi
  int v5; // ebx
  __int64 v6; // rsi
  char *v7; // rdi
  char *v8; // rdi
  _OWORD v10[18]; // [rsp+30h] [rbp-128h] BYREF
  void *v11; // [rsp+178h] [rbp+20h] BYREF

  v4 = a1;
  v5 = 0;
  v6 = -1LL;
  v11 = (void *)-1LL;
  memset(v10, 0, 248);
  if ( a1 )
  {
    if ( a1 >= W32UserProbeAddress )
      a1 = (const struct COMPOSITION_INPUT_SINK *)W32UserProbeAddress;
    if ( *(_DWORD *)a1 >= 0xF8u )
    {
      if ( v4 >= W32UserProbeAddress )
        v4 = (const struct COMPOSITION_INPUT_SINK *)W32UserProbeAddress;
      v10[0] = *(_OWORD *)v4;
      v10[1] = *((_OWORD *)v4 + 1);
      v10[2] = *((_OWORD *)v4 + 2);
      v10[3] = *((_OWORD *)v4 + 3);
      v10[4] = *((_OWORD *)v4 + 4);
      v10[5] = *((_OWORD *)v4 + 5);
      v10[6] = *((_OWORD *)v4 + 6);
      v10[7] = *((_OWORD *)v4 + 7);
      v8 = (char *)v4 + 128;
      v10[8] = *(_OWORD *)v8;
      v10[9] = *((_OWORD *)v8 + 1);
      v10[10] = *((_OWORD *)v8 + 2);
      v10[11] = *((_OWORD *)v8 + 3);
      v10[12] = *((_OWORD *)v8 + 4);
      v10[13] = *((_OWORD *)v8 + 5);
      v10[14] = *((_OWORD *)v8 + 6);
      *(_QWORD *)&v10[15] = *((_QWORD *)v8 + 14);
    }
    else
    {
      if ( v4 >= W32UserProbeAddress )
        v4 = (const struct COMPOSITION_INPUT_SINK *)W32UserProbeAddress;
      v10[0] = *(_OWORD *)v4;
      v10[1] = *((_OWORD *)v4 + 1);
      v10[2] = *((_OWORD *)v4 + 2);
      v10[3] = *((_OWORD *)v4 + 3);
      v10[4] = *((_OWORD *)v4 + 4);
      v10[5] = *((_OWORD *)v4 + 5);
      v10[6] = *((_OWORD *)v4 + 6);
      v10[7] = *((_OWORD *)v4 + 7);
      v7 = (char *)v4 + 128;
      v10[8] = *(_OWORD *)v7;
      v10[9] = *((_OWORD *)v7 + 1);
      v10[10] = *((_OWORD *)v7 + 2);
      v10[11] = *((_OWORD *)v7 + 3);
      *(_QWORD *)&v10[12] = *((_QWORD *)v7 + 8);
      DWORD2(v10[12]) = 0;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    v5 = CompositionInputObject::KernelCreateCompositionInputSink(
           (const struct COMPOSITION_INPUT_SINK_V2 *)v10,
           a2,
           &v11);
    v6 = (__int64)v11;
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = (void *)v6;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 < 0 && v6 != -1 )
    NtClose((HANDLE)v6);
  return (unsigned int)v5;
}
