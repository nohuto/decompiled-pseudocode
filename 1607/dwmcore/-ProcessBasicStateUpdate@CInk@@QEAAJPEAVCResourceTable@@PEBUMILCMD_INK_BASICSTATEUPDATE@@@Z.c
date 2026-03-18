/*
 * XREFs of ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x18010C368
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18014D864 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessBasicStateUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_BASICSTATEUPDATE *a3)
{
  struct ID2D1Ink *v3; // rdi
  struct ID2D1InkStyle *v4; // rsi
  unsigned int v5; // ebp
  char *v7; // r13
  __int64 v8; // rdx
  float *v9; // rax
  double *v10; // rcx
  double v11; // xmm0_8
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  __int64 v14; // r14
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1InkStyle *v16; // rsi
  struct ID2D1InkStyle *v18; // [rsp+70h] [rbp+8h] BYREF
  struct ID2D1Ink *v19; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v19 = 0LL;
  v18 = 0LL;
  if ( *((_DWORD *)a3 + 6) )
    *((_DWORD *)this + 63) = 1;
  else
    *((_DWORD *)this + 63) = 0;
  v7 = (char *)this + 256;
  v8 = 6LL;
  v9 = (float *)((char *)this + 256);
  v10 = (double *)((char *)a3 + 28);
  do
  {
    v11 = *v10++;
    *v9++ = v11;
    --v8;
  }
  while ( v8 );
  v12 = 0;
  v13 = *((_DWORD *)this + 38);
  *((_DWORD *)this + 51) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 49) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 2);
  if ( v13 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v14 + *((_QWORD *)this + 16)), &v19, &v18);
      v5 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v16 = v18;
      (*(void (__fastcall **)(struct ID2D1InkStyle *, _QWORD))(*(_QWORD *)v18 + 48LL))(
        v18,
        *((unsigned int *)this + 63));
      (*(void (__fastcall **)(struct ID2D1InkStyle *, char *))(*(_QWORD *)v16 + 32LL))(v16, v7);
      v3 = v19;
      if ( v19 )
      {
        (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v19 + 16LL))(v19);
        v3 = 0LL;
        v19 = 0LL;
      }
      (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v16 + 16LL))(v16);
      v4 = 0LL;
      ++v12;
      v14 += 8LL;
      v18 = 0LL;
      if ( v12 >= v13 )
        goto LABEL_12;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x4Cu);
    v3 = v19;
    v4 = v18;
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
