/*
 * XREFs of ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003599C
 * Callers:
 *     RmpTracingControlCallback @ 0x18001F6F0 (RmpTracingControlCallback.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogRundownEvent(ExecutionModel::ResourceSet *this)
{
  unsigned int v1; // edi
  _QWORD *v2; // r14
  _QWORD *Heap; // rsi
  struct _PEB *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  const WCHAR *v9; // rdx
  const struct _TlgProvider_t *v10; // rcx
  int v11; // r10d
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+32h] [rbp-CEh] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  const struct _TlgProvider_t *v19; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+7Ch] [rbp-84h]
  char *v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  const struct _TlgProvider_t **v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  int *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  char *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  char *v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  __int16 *v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]
  _QWORD *v46; // [rsp+100h] [rbp+0h]
  int v47; // [rsp+108h] [rbp+8h]
  int v48; // [rsp+10Ch] [rbp+Ch]

  LOWORD(v1) = 0;
  v2 = (_QWORD *)((char *)this + 1872);
  Heap = 0LL;
  if ( (_QWORD *)*v2 != v2 )
  {
    v1 = *((_DWORD *)this + 472);
    v5 = NtCurrentPeb();
    if ( v1 > 0xFFFF )
      v1 = 0xFFFF;
    Heap = RtlAllocateHeap(v5->ProcessHeap, 0, 8LL * v1);
    if ( Heap )
    {
      v6 = (_QWORD *)*v2;
      v7 = 0LL;
      while ( v6 != v2 )
      {
        Heap[v7] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6[2] + 1368LL) + 64LL))(v6[2] + 1368LL);
        v7 = (unsigned int)(v7 + 1);
        if ( (_DWORD)v7 == v1 )
          break;
        v6 = (_QWORD *)*v6;
      }
    }
    else
    {
      LOWORD(v1) = 0;
    }
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(this, 9uLL) )
  {
    v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 64LL))((char *)this + 1368);
    v9 = (const WCHAR *)*((_QWORD *)this + 4);
    v23 = 0;
    v26 = 0;
    v18 = v8;
    v21 = &v18;
    v14 = *((_BYTE *)this + 1352);
    v24 = &v14;
    v22 = 8;
    v25 = 1;
    TlgCreateWsz(&pDesc, v9);
    v10 = (const struct _TlgProvider_t *)*((_QWORD *)this + 18);
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v28 = &v19;
    v16 = *((_DWORD *)this + 340);
    v31 = &v16;
    v17 = *((_DWORD *)this + 354);
    v34 = &v17;
    v37 = (char *)this + 224;
    v40 = (char *)this + 248;
    v43 = &v15;
    v48 = 0;
    v47 = 8 * (unsigned __int16)v1;
    v19 = v10;
    v29 = v11;
    v32 = 4;
    v35 = 4;
    v38 = v11;
    v41 = v11;
    v15 = v1;
    v44 = 2;
    v46 = Heap;
    TlgWrite(v10, &unk_180042CE3, v12, v13, 0xCu, &pData);
  }
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
}
