/*
 * XREFs of ?CreateResourcePolicy@ResourcePolicyStore@ExecutionModel@@UEAAJQEBGKPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x18004C400
 * Callers:
 *     <none>
 * Callees:
 *     ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x180026598 (-AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetail.c)
 *     ?SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z @ 0x180027F84 (-SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18002807C (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::CreateResourcePolicy(
        ExecutionModel::ResourcePolicyStore *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const struct _ResourcePolicyDetails *a4,
        enum RmResourceSetType *a5)
{
  int v8; // edi
  const struct _ResourcePolicyDetails *v9; // rax
  const struct _ResourcePolicyDetails *v10; // rbx
  const WCHAR *v11; // rdx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]

  if ( a5 )
    *(_DWORD *)a5 = 57;
  if ( !a2 || !a4 )
    return 2147942487LL;
  SourceString = 0LL;
  v12 = 0;
  v14 = 0;
  v8 = Common::StringBuffer::SetValueFromString((Common::StringBuffer *)&v12, a2);
  if ( v8 >= 0 )
  {
    v9 = (const struct _ResourcePolicyDetails *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
      memset_0(v9, 0, 0x70uLL);
    else
      v10 = 0LL;
    if ( v10 )
    {
      v11 = SourceString;
      *(_OWORD *)v10 = *(_OWORD *)a4;
      *((_OWORD *)v10 + 1) = *((_OWORD *)a4 + 1);
      *((_OWORD *)v10 + 2) = *((_OWORD *)a4 + 2);
      *((_OWORD *)v10 + 3) = *((_OWORD *)a4 + 3);
      *((_OWORD *)v10 + 4) = *((_OWORD *)a4 + 4);
      *((_OWORD *)v10 + 5) = *((_OWORD *)a4 + 5);
      *((_OWORD *)v10 + 6) = *((_OWORD *)a4 + 6);
      v8 = ExecutionModel::ResourcePolicyStore::AddResourcePolicyDetails(this, v11, v10, a5);
      if ( v8 >= 0 )
      {
        SourceString = 0LL;
        v12 = 0;
        v14 = 0;
        v10 = 0LL;
      }
    }
    else
    {
      v8 = -2147024882;
    }
    operator delete(v10);
  }
  Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v12);
  return (unsigned int)v8;
}
