/*
 * XREFs of ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x18001EE94
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x18001F0C4 (-Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B0464 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessAppend(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_APPEND *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-18h]
  struct CPayloadedAnimationPrimitiveBuffer *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  if ( !is_mul_ok(*((unsigned int *)a3 + 2), 0x20uLL) )
  {
    v8 = -2147024362;
    v15 = 291;
    goto LABEL_21;
  }
  v8 = 0;
  if ( 32LL * *((unsigned int *)a3 + 2) != a5 )
  {
    v8 = -2003303421;
    v15 = 295;
LABEL_21:
    v13 = v8;
    goto LABEL_22;
  }
  if ( a4 && *((_DWORD *)a3 + 2) )
  {
    if ( !*((_QWORD *)this + 23) )
    {
      v9 = CPayloadedAnimationPrimitiveBuffer::Create(&v16);
      v8 = v9;
      if ( v9 < 0 )
      {
        v15 = 304;
LABEL_18:
        v13 = v9;
LABEL_22:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v15);
        goto LABEL_12;
      }
      *((_QWORD *)this + 23) = v16;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const void *))(**((_QWORD **)this + 23) + 40LL))(
           *((_QWORD *)this + 23),
           *((unsigned int *)a3 + 2),
           a4);
    v8 = v9;
    if ( v9 < 0 )
    {
      v15 = 308;
    }
    else
    {
      v10 = *((_QWORD *)this + 26);
      if ( v10 && !*(_QWORD *)(v10 + 144) )
        goto LABEL_12;
      v9 = CBaseAnimation::RegisterAnimateResource(this);
      v8 = v9;
      if ( v9 >= 0 )
        goto LABEL_12;
      v15 = 314;
    }
    goto LABEL_18;
  }
LABEL_12:
  v11 = *((_QWORD *)this + 23);
  if ( v11 )
  {
    if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11) )
    {
      v14 = *((_QWORD *)this + 23);
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        *((_QWORD *)this + 23) = 0LL;
      }
    }
  }
  return v8;
}
