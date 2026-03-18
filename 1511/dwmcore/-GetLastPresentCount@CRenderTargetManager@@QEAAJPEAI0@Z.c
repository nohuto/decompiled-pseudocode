/*
 * XREFs of ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x1800FB7B0
 * Callers:
 *     ?GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z @ 0x1800FCC44 (-GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderTargetManager::GetLastPresentCount(
        CRenderTargetManager *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  unsigned int *i; // rdi
  _QWORD *v8; // rsi
  int v9; // eax
  __int64 result; // rax

  v3 = 0LL;
  v4 = 0LL;
  for ( i = a3; (unsigned int)v4 < *((_DWORD *)this + 12); v4 = (unsigned int)(v4 + 1) )
  {
    if ( (unsigned int)v3 >= *a2 )
      break;
    v8 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v4);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v8 + 48LL))(v8, 37LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v8 + 136LL))(v8) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(v8[5] + 120LL))(v8 + 5, &i[v3]);
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v9, 0x478u);
      i = a3;
      v3 = (unsigned int)(v3 + 1);
    }
  }
  result = 2291662989LL;
  *a2 = v3;
  return result;
}
