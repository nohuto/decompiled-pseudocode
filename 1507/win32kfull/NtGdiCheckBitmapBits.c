/*
 * XREFs of NtGdiCheckBitmapBits @ 0x1C02B0A60
 * Callers:
 *     <none>
 * Callees:
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B0130 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 */

__int64 __fastcall NtGdiCheckBitmapBits(HDC a1, void *a2, char *a3, int a4, SIZE_T Size, int a6, int a7, char *Address)
{
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  char *v14; // r8
  HANDLE v15; // r14
  HANDLE v16; // rax
  void *v17; // rdi
  ULONG v19; // ecx
  int v20; // [rsp+48h] [rbp-60h] BYREF
  __int64 v21; // [rsp+4Ch] [rbp-5Ch]
  __int128 v22; // [rsp+54h] [rbp-54h]
  int v23; // [rsp+64h] [rbp-44h]

  v20 = 0;
  v21 = 0LL;
  v22 = 0uLL;
  v23 = 0;
  v11 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_24;
  v12 = 3LL * (unsigned int)Size;
  if ( v12 > 0xFFFFFFFF || (int)v12 + 3 < (unsigned int)v12 )
  {
    v19 = 534;
LABEL_25:
    EngSetLastError(v19);
    return 0LL;
  }
  v13 = (v12 + 3) & 0xFFFFFFFC;
  if ( a7 != v13 )
  {
LABEL_24:
    v19 = 87;
    goto LABEL_25;
  }
  v20 = 5;
  v21 = (unsigned int)Size | 0x100000000LL;
  LODWORD(v22) = (v12 + 3) & 0xFFFFFFFC;
  *(_QWORD *)((char *)&v22 + 4) = 0LL;
  HIDWORD(v22) = 0;
  if ( v13 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = &a3[v13];
    if ( (unsigned __int64)v14 > W32UserProbeAddress || v14 < a3 )
      *W32UserProbeAddress = 0;
  }
  if ( (_DWORD)Size
    && ((unsigned __int64)&Address[(unsigned int)Size] > W32UserProbeAddress || &Address[(unsigned int)Size] < Address) )
  {
    *W32UserProbeAddress = 0;
  }
  v15 = MmSecureVirtualMemory(a3, v13, 2u);
  v16 = MmSecureVirtualMemory(Address, (unsigned int)Size, 4u);
  v17 = v16;
  if ( v15 )
  {
    if ( v16 )
      v11 = GreCheckBitmapBits(a1, a2, (struct _DEVBITMAPINFO *)&v20, a3, (unsigned __int8 *)Address);
    MmUnsecureVirtualMemory(v15);
  }
  if ( v17 )
    MmUnsecureVirtualMemory(v17);
  return v11;
}
