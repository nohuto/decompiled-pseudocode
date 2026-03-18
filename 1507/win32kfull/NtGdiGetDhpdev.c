/*
 * XREFs of NtGdiGetDhpdev @ 0x1C02AF150
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHdev@@YAHPEAUHDEV__@@@Z @ 0x1C02AA0C4 (-ValidUmpdHdev@@YAHPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall NtGdiGetDhpdev(HDEV a1)
{
  __int64 v2; // rbx
  HDEV v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (unsigned int)ValidUmpdHdev(a1) )
  {
    v2 = *((_QWORD *)a1 + 228);
    v4 = a1;
    PDEVOBJ::vUnreferencePdev(&v4, 0LL);
  }
  return v2;
}
