/*
 * XREFs of ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180004910
 * Callers:
 *     <none>
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUDuckingGainValueChangedContext@@@Z0@Z @ 0x180004EC8 (--$QueueApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180010A54 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId(
        CWindowsPolicyManager *this,
        int a2,
        const unsigned __int16 *a3,
        float a4)
{
  LPVOID *v4; // r14
  HANDLE ProcessHeap; // rax
  float *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  LPVOID *v11; // rsi
  LPVOID *v12; // rbx
  signed int v13; // edi
  __int64 v14; // r9
  HANDLE v15; // rax
  HANDLE v16; // rax

  v4 = 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = (float *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v11 = (LPVOID *)v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = 0LL;
    v8[3] = a4;
    *((_DWORD *)v8 + 2) = a2;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = v11;
  v13 = v11 == 0LL ? 0x8007000E : 0;
  if ( v11 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a3[v14] );
    v13 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, a3);
    if ( v13 >= 0 )
    {
      v12 = 0LL;
      v4 = v11;
    }
  }
  if ( v12 )
  {
    CoTaskMemFree(*v12);
    *v12 = 0LL;
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v12);
  }
  if ( v13 < 0 || (v13 = QueueApplicationManagerWorkItem<DuckingGainValueChangedContext>(v10, v4), v13 < 0) )
  {
    if ( v4 )
    {
      CoTaskMemFree(*v4);
      *v4 = 0LL;
      v16 = GetProcessHeap();
      HeapFree(v16, 0, v4);
    }
  }
  return (unsigned int)v13;
}
