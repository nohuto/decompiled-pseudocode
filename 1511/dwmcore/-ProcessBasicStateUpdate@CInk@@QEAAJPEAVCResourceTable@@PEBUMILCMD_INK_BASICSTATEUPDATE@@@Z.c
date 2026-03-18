/*
 * XREFs of ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x1800F509C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18012DA5C (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessBasicStateUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_BASICSTATEUPDATE *a3)
{
  struct ID2D1Ink *v3; // rsi
  struct ID2D1InkStyle *v4; // r14
  unsigned int v5; // ebp
  float *v7; // rax
  __int64 v8; // rdx
  double *v9; // rcx
  double v10; // xmm0_8
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  __int64 v13; // r15
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1InkStyle *v15; // r14
  struct ID2D1InkStyle *v17; // [rsp+70h] [rbp+8h] BYREF
  struct ID2D1Ink *v18; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v18 = 0LL;
  v17 = 0LL;
  if ( *((_DWORD *)a3 + 6) )
    *((_DWORD *)this + 45) = 1;
  else
    *((_DWORD *)this + 45) = 0;
  v7 = (float *)((char *)this + 184);
  v8 = 6LL;
  v9 = (double *)((char *)a3 + 28);
  do
  {
    v10 = *v9++;
    *v7++ = v10;
    --v8;
  }
  while ( v8 );
  v11 = 0;
  v12 = *((_DWORD *)this + 20);
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 2);
  if ( v12 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v13 + *((_QWORD *)this + 7)), &v18, &v17);
      v5 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v15 = v17;
      (*(void (__fastcall **)(struct ID2D1InkStyle *, _QWORD))(*(_QWORD *)v17 + 48LL))(
        v17,
        *((unsigned int *)this + 45));
      (*(void (__fastcall **)(struct ID2D1InkStyle *, char *))(*(_QWORD *)v15 + 32LL))(v15, (char *)this + 184);
      v3 = v18;
      if ( v18 )
      {
        (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v18 + 16LL))(v18);
        v3 = 0LL;
        v18 = 0LL;
      }
      (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v15 + 16LL))(v15);
      v4 = 0LL;
      ++v11;
      v13 += 8LL;
      v17 = 0LL;
      if ( v11 >= v12 )
        goto LABEL_12;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x4Cu);
    v3 = v18;
    v4 = v17;
  }
  else
  {
LABEL_12:
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  if ( v3 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
