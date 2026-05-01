/*
 * XREFs of ?CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z @ 0x180024A64
 * Callers:
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z @ 0x180025954 (-CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z.c)
 * Callees:
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GResourcePolicyStore@ExecutionModel@@QEAAPEAXI@Z @ 0x18004C3CC (--_GResourcePolicyStore@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::CreatePolicyStore(
        LPCWSTR lpSubKey,
        unsigned __int16 *a2,
        struct ExecutionModel::IResourcePolicyStore **a3)
{
  ExecutionModel::ResourcePolicyStore *v5; // rax
  ExecutionModel::ResourcePolicyStore *v6; // rdi
  unsigned int v7; // edx
  int v8; // esi

  *(_QWORD *)a2 = 0LL;
  v5 = (ExecutionModel::ResourcePolicyStore *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &ExecutionModel::ResourcePolicyStore::`vftable';
    *((_QWORD *)v5 + 1) = (char *)v5 + 8;
    *((_QWORD *)v5 + 2) = (char *)v5 + 8;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_WORD *)v5 + 20) = 2048;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 9) = 0LL;
    *((_DWORD *)v5 + 16) = 58;
    *((_DWORD *)v5 + 20) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    return 2147942414LL;
  v8 = ExecutionModel::ResourcePolicyStore::Initialize(v6, lpSubKey);
  if ( v8 < 0 )
  {
    ExecutionModel::ResourcePolicyStore::`scalar deleting destructor'(v6, v7);
  }
  else
  {
    (*(void (__fastcall **)(ExecutionModel::ResourcePolicyStore *))(*(_QWORD *)v6 + 8LL))(v6);
    *(_QWORD *)a2 = v6;
  }
  return (unsigned int)v8;
}
