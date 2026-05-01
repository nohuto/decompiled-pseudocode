/*
 * XREFs of ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180033C58
 * Callers:
 *     RmpTracingControlCallback @ 0x180020320 (RmpTracingControlCallback.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogRundownEvent(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // r14
  unsigned int v3; // ebx
  PVOID ProcessHeap; // rcx
  const struct _TlgProvider_t *v5; // rcx
  _QWORD *Heap; // rdi
  int v7; // r11d
  __int64 v8; // rax
  const WCHAR *v9; // rdx
  const struct _TlgProvider_t *v10; // rcx
  int v11; // r10d
  int v12; // r11d
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v16; // [rsp+32h] [rbp-CEh] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  const struct _TlgProvider_t *v20; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  char *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  const struct _TlgProvider_t **v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+ACh] [rbp-54h]
  int *v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  int *v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]
  char *v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  char *v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  __int16 *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  _QWORD *v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]

  v1 = *((_QWORD *)this + 173);
  v3 = *(_DWORD *)(v1 + 80);
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( v3 > 0xFFFF )
    v3 = 0xFFFF;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 8LL * v3);
  if ( Heap )
  {
    if ( v3 )
    {
      _mm_lfence();
      do
      {
        v5 = **(const struct _TlgProvider_t ***)(v1 + 72);
        *Heap = *((_QWORD *)v5 + 3);
        ++v3;
      }
      while ( v3 );
    }
  }
  else
  {
    LOWORD(v3) = 0;
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 9uLL) )
  {
    v8 = *((_QWORD *)this + 230);
    v9 = (const WCHAR *)*((_QWORD *)this + 4);
    v24 = 0;
    v27 = 0;
    v19 = v8;
    v22 = &v19;
    v15 = *((_BYTE *)this + 1352);
    v25 = &v15;
    v23 = v7 + 4;
    v26 = 1;
    TlgCreateWsz(&pDesc, v9);
    v10 = (const struct _TlgProvider_t *)*((_QWORD *)this + 18);
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v29 = &v20;
    v17 = *((_DWORD *)this + 340);
    v32 = &v17;
    v18 = *((_DWORD *)this + 352);
    v35 = &v18;
    v38 = (char *)this + 224;
    v41 = (char *)this + 248;
    v44 = &v16;
    v49 = 0;
    v48 = 8 * (unsigned __int16)v3;
    v20 = v10;
    v30 = v11;
    v33 = v12;
    v36 = v12;
    v39 = v11;
    v42 = v11;
    v16 = v3;
    v45 = 2;
    v47 = Heap;
    TlgWrite(v10, &unk_180043000, v13, v14, 0xCu, &pData);
  }
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
}
