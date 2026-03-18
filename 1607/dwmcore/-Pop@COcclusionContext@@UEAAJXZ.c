/*
 * XREFs of ?Pop@COcclusionContext@@UEAAJXZ @ 0x18005C990
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAHPEAW4StackStateType@COcclusionContext@@@Z @ 0x1800A32F8 (-Pop@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAHPEAW4StackStateType.c)
 */

__int64 __fastcall COcclusionContext::Pop(COcclusionContext *this)
{
  unsigned int v1; // edi
  int v3; // eax
  int v4; // ecx
  bool v5; // zf
  char *v6; // rcx
  int v7; // eax
  int v9; // ecx
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 221) )
  {
    --*((_DWORD *)this + 221);
  }
  else
  {
    v3 = *((_DWORD *)this + 222);
    if ( v3 )
    {
      v4 = *(_DWORD *)(*((_QWORD *)this + 113) + 4LL * (unsigned int)(v3 - 1));
    }
    else
    {
      v1 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x512u);
      v4 = v10;
    }
    v5 = v4 == 0;
    v6 = (char *)this + 888;
    if ( v5 )
    {
      CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop(v6, &v10);
      v9 = *((_DWORD *)this + 14);
      if ( v9 )
        *((_DWORD *)this + 14) = v9 - 1;
    }
    else
    {
      CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop(v6, &v10);
      v7 = *((_DWORD *)this + 2);
      if ( v7 )
        *((_DWORD *)this + 2) = v7 - 1;
    }
  }
  return v1;
}
