/*
 * XREFs of SeCopyClientToken @ 0x1404B0584
 * Callers:
 *     SepCreateClientSecurityEx @ 0x140411140 (SepCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x1404F2350 (PsImpersonateClient.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14068D15C (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SepSetTokenTrust @ 0x140412DBC (SepSetTokenTrust.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 */

__int64 __fastcall SeCopyClientToken(__int64 a1, unsigned int a2, __int64 a3, char a4, void *a5, _QWORD *a6)
{
  int inserted; // edi
  _QWORD *v8; // rbx
  _WORD *v10; // r8
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  __int128 v16; // [rsp+68h] [rbp-20h]

  v13 = 0LL;
  v15 = 0;
  v14 = 0LL;
  v12 = 48;
  v16 = 0LL;
  inserted = SepDuplicateToken(a1, (int)&v12, 0, 2, a2, 0, 0, (char **)&Object);
  if ( inserted < 0 )
    goto LABEL_13;
  v8 = Object;
  if ( a4 )
    inserted = SepSetTokenTrust((__int64)Object, a5);
  if ( inserted < 0 )
    goto LABEL_13;
  inserted = ObInsertObjectEx(v8, 0LL, 0LL, 0, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_13;
  if ( (v8[25] & 0x4000) != 0 )
  {
    v10 = (_WORD *)v8[98];
    if ( v10 )
    {
      inserted = SepAppendAceToTokenObjectAcl((__int64)v8, 983551, v10);
      if ( inserted >= 0 )
        goto LABEL_8;
      ObfDereferenceObject(v8);
    }
  }
  if ( inserted < 0 )
  {
LABEL_13:
    *a6 = 0LL;
    return (unsigned int)inserted;
  }
LABEL_8:
  SepAppendAceToTokenObjectAcl((__int64)v8, 8, SeAliasAdminsSid);
  *a6 = v8;
  return (unsigned int)inserted;
}
