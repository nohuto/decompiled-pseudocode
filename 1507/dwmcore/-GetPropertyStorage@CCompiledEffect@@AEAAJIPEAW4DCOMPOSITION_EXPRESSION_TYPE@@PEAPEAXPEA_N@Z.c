/*
 * XREFs of ?GetPropertyStorage@CCompiledEffect@@AEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAXPEA_N@Z @ 0x18011318C
 * Callers:
 *     ?SetPropertyValue@CCompiledEffect@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180113970 (-SetPropertyValue@CCompiledEffect@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180100FB4 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?Lookup@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEBAPEAVInternalFilterInput@@AEBI@Z @ 0x180111E24 (-Lookup@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEBAPE.c)
 */

__int64 __fastcall CCompiledEffect::GetPropertyStorage(
        CCompiledEffect *this,
        unsigned int a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3,
        void **a4,
        bool *a5)
{
  __int64 v5; // r14
  unsigned int v6; // esi
  int v10; // r9d
  __int64 v11; // r14
  bool v12; // r12
  int ExpressionTypeChannelCount; // edi
  __int64 v14; // rax
  __int64 v15; // rax
  const void *v16; // rax
  void *v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-88h]
  unsigned int v20; // [rsp+30h] [rbp-78h]
  unsigned int Size; // [rsp+34h] [rbp-74h]
  int v23; // [rsp+40h] [rbp-68h] BYREF
  int v24; // [rsp+44h] [rbp-64h]
  unsigned int v25; // [rsp+48h] [rbp-60h]

  v5 = *((_QWORD *)this + 7);
  v6 = 0;
  if ( !v5 )
  {
    v6 = -2147483634;
    v19 = 772;
LABEL_3:
    v10 = v6;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v19);
    return v6;
  }
  v11 = *(_QWORD *)(v5 + 48);
  if ( a2 >= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11) )
  {
    v19 = 778;
LABEL_19:
    v10 = -2147024809;
    v6 = -2147024809;
    goto LABEL_20;
  }
  v12 = 0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v11 + 56LL))(v11, a2, 0LL, &v23);
  if ( v23 == 1 )
  {
    v20 = v25;
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(v24);
    Size = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 72LL))(v11);
    v14 = v20;
    if ( v20 + 4 * ExpressionTypeChannelCount > Size )
    {
      v19 = 792;
      goto LABEL_19;
    }
    if ( !*((_QWORD *)this + 9) )
    {
      v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              Size);
      *((_QWORD *)this + 9) = v15;
      if ( !v15 )
      {
        v6 = -2147024882;
        v19 = 802;
        goto LABEL_3;
      }
      v16 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11);
      memcpy_0(*((void **)this + 9), v16, Size);
      v14 = v20;
    }
    v17 = (void *)(*((_QWORD *)this + 9) + v14);
  }
  else
  {
    if ( v23 != 2 )
    {
      v19 = 821;
      goto LABEL_19;
    }
    v17 = (void *)(CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Lookup()
                 + 20);
    v12 = 1;
  }
  *a4 = v17;
  *(_DWORD *)a3 = v24;
  if ( a5 )
    *a5 = v12;
  return v6;
}
