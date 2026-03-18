/*
 * XREFs of ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C01275CC
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::QueryGpuMmuCaps(ADAPTER_RENDER *this, __int64 a2, struct _D3DKMT_GPUMMU_CAPS *a3)
{
  __int64 v4; // rsi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  UINT v10; // eax
  UINT v11; // ecx

  v4 = (unsigned int)a2;
  v6 = *(unsigned int *)(*((_QWORD *)this + 2) + 1380LL);
  if ( (v6 & 0x40) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, v6);
    *(_QWORD *)(v7 + 24) = 30152LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 104);
  if ( v8 )
    v9 = (_DWORD *)(v8 + 144 * v4);
  else
    v9 = 0LL;
  a3->Flags.Value = 0;
  v10 = *v9 & 1;
  a3->Flags.Value = v10;
  v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)*v9) & 2;
  a3->Flags.Value = v11;
  a3->Flags.Value = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(*v9 >> 2)) & 4;
  a3->VirtualAddressBitCount = v9[2];
}
