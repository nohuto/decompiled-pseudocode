/*
 * XREFs of ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x18001BEE0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x18001C250 (-Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800ABB48 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimation::ProcessAppend(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_APPEND *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rsi
  int v13; // r9d
  __int64 v14; // rsi
  unsigned int v15; // [rsp+20h] [rbp-28h]
  struct CPayloadedAnimationPrimitiveBuffer *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  if ( !is_mul_ok(*((unsigned int *)a3 + 2), 0x20uLL) )
  {
    v8 = -2147024362;
    v15 = 288;
    goto LABEL_21;
  }
  v8 = 0;
  if ( 32LL * *((unsigned int *)a3 + 2) != a5 )
  {
    v8 = -2003303421;
    v15 = 292;
LABEL_21:
    v13 = v8;
    goto LABEL_22;
  }
  if ( a4 && *((_DWORD *)a3 + 2) )
  {
    if ( !*((_QWORD *)this + 13) )
    {
      v9 = CPayloadedAnimationPrimitiveBuffer::Create(&v16);
      v8 = v9;
      if ( v9 < 0 )
      {
        v15 = 301;
LABEL_18:
        v13 = v9;
LABEL_22:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v15);
        goto LABEL_12;
      }
      *((_QWORD *)this + 13) = v16;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const void *))(**((_QWORD **)this + 13) + 40LL))(
           *((_QWORD *)this + 13),
           *((unsigned int *)a3 + 2),
           a4);
    v8 = v9;
    if ( v9 < 0 )
    {
      v15 = 305;
    }
    else
    {
      v10 = *((_QWORD *)this + 16);
      if ( v10 && !*(_QWORD *)(v10 + 72) )
        goto LABEL_12;
      v9 = CBaseAnimation::RegisterAnimateResource(this);
      v8 = v9;
      if ( v9 >= 0 )
        goto LABEL_12;
      v15 = 311;
    }
    goto LABEL_18;
  }
LABEL_12:
  v11 = *((_QWORD *)this + 13);
  if ( v11 )
  {
    if ( !(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 32LL))(*((_QWORD *)this + 13)) )
    {
      v14 = *((_QWORD *)this + 13);
      if ( v14 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*((_QWORD *)this + 13));
        *((_QWORD *)this + 13) = 0LL;
      }
    }
  }
  return v8;
}
