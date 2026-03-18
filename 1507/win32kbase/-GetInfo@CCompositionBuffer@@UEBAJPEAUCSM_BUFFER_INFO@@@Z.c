/*
 * XREFs of ?GetInfo@CCompositionBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C00DF700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionBuffer::GetInfo(CCompositionBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 1;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 1);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 40);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 56);
  *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 72);
  *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)this + 88);
  *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)this + 104);
  *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)this + 120);
  *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)this + 136);
  *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)this + 152);
  *((_OWORD *)a2 + 9) = *(_OWORD *)((char *)this + 168);
  *((_OWORD *)a2 + 10) = *(_OWORD *)((char *)this + 184);
  *((_QWORD *)a2 + 22) = *((_QWORD *)this + 25);
  result = (*(__int64 (__fastcall **)(CCompositionBuffer *, __int64 *))(*(_QWORD *)this + 176LL))(this, &v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    *(_OWORD *)((char *)a2 + 184) = *(_OWORD *)(v5 + 24);
    *(_OWORD *)((char *)a2 + 200) = *(_OWORD *)(v4 + 40);
  }
  return result;
}
