/*
 * XREFs of sub_1400095B4 @ 0x1400095B4
 * Callers:
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 * Callees:
 *     sub_140001FB0 @ 0x140001FB0 (sub_140001FB0.c)
 *     sub_140009724 @ 0x140009724 (sub_140009724.c)
 */

__int64 __fastcall sub_1400095B4(__int128 *a1)
{
  int v2; // ecx
  char v3; // r14
  int v4; // ebx
  _QWORD *Heap; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  WCHAR v8; // ax
  PVOID **v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  PVOID **v13; // rcx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING v15; // [rsp+40h] [rbp-10h] BYREF
  ULONG Value; // [rsp+78h] [rbp+28h] BYREF
  ULONG v17; // [rsp+80h] [rbp+30h] BYREF

  if ( (unsigned int)dword_14002044C >= 0x10 )
    return 3221225623LL;
  v2 = sub_140001FB0(a1, 0LL, &v15, 0LL, &UnicodeString);
  if ( v2 < 0 )
  {
    v11 = 2LL * (_InterlockedIncrement(&dword_140020420) % 32);
    *((_DWORD *)&unk_140020220 + 2 * v11) = 840;
    *((_DWORD *)&unk_140020220 + 2 * v11 + 1) = v2;
    *((_QWORD *)&unk_140020220 + v11 + 1) = a1;
    return (unsigned int)v2;
  }
  Value = 0;
  v3 = 0;
  v17 = 0;
  byte_140020460 = 1;
  if ( !UnicodeString.Buffer )
    goto LABEL_16;
  v4 = sub_140009724(&UnicodeString, &Value, &v17);
  if ( v4 < 0 )
  {
    v12 = 2LL * (_InterlockedIncrement(&dword_140020420) % 32);
    *((_QWORD *)&unk_140020220 + v12 + 1) = 0LL;
    *((_DWORD *)&unk_140020220 + 2 * v12) = 878;
    *((_DWORD *)&unk_140020220 + 2 * v12 + 1) = v4;
    RtlFreeUnicodeString(&v15);
    RtlFreeUnicodeString(&UnicodeString);
    return (unsigned int)v4;
  }
  if ( !Value || !v17 )
LABEL_16:
    v3 = 1;
  RtlFreeUnicodeString(&UnicodeString);
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x60uLL);
  v6 = Heap;
  if ( !Heap )
  {
    RtlFreeUnicodeString(&v15);
    return 3221225495LL;
  }
  *((_OWORD *)Heap + 2) = *a1;
  *((struct _UNICODE_STRING *)Heap + 1) = v15;
  Heap[7] = (unsigned __int64)Value << 20;
  Heap[6] = (unsigned __int64)Value << 20;
  v7 = v17;
  *((_DWORD *)v6 + 23) &= ~2u;
  v6[8] = v7 << 20;
  *((_DWORD *)v6 + 23) |= 2 * (v3 & 1);
  v8 = RtlUpcaseUnicodeChar(*(_WORD *)(v6[3] + 8LL));
  *(_WORD *)(v6[3] + 8LL) = v8;
  if ( v8 == 63 )
  {
    if ( byte_140020461 == 1 )
    {
      RtlFreeUnicodeString(&v15);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v6);
      return 3221225485LL;
    }
    *((_DWORD *)v6 + 23) |= 4u;
    byte_140020461 = 1;
  }
  if ( (*((_BYTE *)v6 + 92) & 2) != 0 && (v8 == 63 || v8 == word_140020448) )
  {
    v13 = (PVOID **)qword_140020450;
    *v6 = qword_140020450;
    v6[1] = &qword_140020450;
    if ( v13[1] != &qword_140020450 )
      __fastfail(3u);
    v13[1] = (PVOID *)v6;
    qword_140020450 = v6;
  }
  else
  {
    v9 = (PVOID **)qword_140020458;
    *v6 = &qword_140020450;
    v6[1] = v9;
    if ( *v9 != &qword_140020450 )
      __fastfail(3u);
    *v9 = (PVOID *)v6;
    qword_140020458 = (__int64)v6;
  }
  ++dword_14002044C;
  return 0LL;
}
