/*
 * XREFs of ?SetHDR10MetaData@CFlipExBuffer@@UEAAJAEBUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1C00F3FA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 */

__int64 __fastcall CFlipExBuffer::SetHDR10MetaData(CFlipExBuffer *this, const struct DXGI_HDR_METADATA_HDR10 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = 0;
  if ( *((_QWORD *)this + 43) || (v5 = Win32AllocPool(), (*((_QWORD *)this + 43) = v5) != 0LL) )
  {
    v6 = *((_QWORD *)this + 43);
    *(_OWORD *)v6 = *(_OWORD *)a2;
    *(_QWORD *)(v6 + 16) = *((_QWORD *)a2 + 2);
    *(_DWORD *)(v6 + 24) = *((_DWORD *)a2 + 6);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
