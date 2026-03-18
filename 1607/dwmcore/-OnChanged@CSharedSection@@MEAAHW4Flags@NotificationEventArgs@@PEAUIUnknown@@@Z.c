/*
 * XREFs of ?OnChanged@CSharedSection@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800B00E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSharedSection::OnChanged(__int64 a1)
{
  LPVOID v2; // rdi
  void *v3; // rcx
  const void *v4; // rcx

  v2 = 0LL;
  v3 = *(void **)(a1 + 112);
  if ( v3 )
  {
    v2 = MapViewOfFile(v3, 2u, 0, 0, *(unsigned int *)(a1 + 120));
    CloseHandle(*(HANDLE *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  v4 = *(const void **)(a1 + 128);
  if ( v4 )
    UnmapViewOfFile(v4);
  *(_QWORD *)(a1 + 128) = v2;
  return 0LL;
}
