/*
 * XREFs of ?HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z @ 0x180103F98
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180001520 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CoRenderHost::HitTest(
        CoRenderHost *this,
        HMONITOR a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned int a5,
        void **a6,
        struct CVisual **a7,
        unsigned int *a8)
{
  int v8; // eax
  unsigned int v9; // ebx
  struct CVisual *v11; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF

  v8 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR, _QWORD, _QWORD, unsigned int, void **, struct CVisual **, unsigned int *))(**((_QWORD **)this + 3) + 136LL))(
         *((_QWORD *)this + 3),
         a2,
         a3,
         a4,
         a5,
         a6,
         &v11,
         &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *a7 = v11;
    *a8 = v12;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x124u);
  }
  return v9;
}
