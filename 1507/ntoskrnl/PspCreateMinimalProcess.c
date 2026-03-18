/*
 * XREFs of PspCreateMinimalProcess @ 0x1406C58D4
 * Callers:
 *     PspCreatePicoProcess @ 0x1406C5ADC (PspCreatePicoProcess.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeKvaShadowingActive @ 0x140209EF0 (KeKvaShadowingActive.c)
 *     PspCreateObjectHandle @ 0x140421204 (PspCreateObjectHandle.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 *     DbgkCreateMinimalProcess @ 0x140669460 (DbgkCreateMinimalProcess.c)
 *     MmSynchronizeAddressPolicy @ 0x1406A85EC (MmSynchronizeAddressPolicy.c)
 */

__int64 __fastcall PspCreateMinimalProcess(struct _KPROCESS *a1, char a2, void *a3, int a4, char a5, _QWORD *a6)
{
  PACCESS_TOKEN v7; // r14
  char v10; // si
  unsigned __int8 v11; // r15
  unsigned int v12; // r12d
  signed int inserted; // edi
  PVOID v14; // rbx
  signed __int8 v15; // cf
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v21; // [rsp+80h] [rbp-80h]
  _BYTE v22[400]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[48]; // [rsp+220h] [rbp+120h] BYREF

  v21 = a6;
  v7 = a3;
  v10 = 1;
  if ( a3 )
  {
    v11 = 1;
  }
  else
  {
    v7 = PsReferencePrimaryToken(a1);
    v11 = 0;
  }
  v12 = a4 | 0x800;
  inserted = PspAllocateProcess((ULONG_PTR)a1, 0, 0LL, a2, 0, 0, 0LL, v7, v12, 0LL, v11, (__int64)&v19, &Object);
  if ( inserted >= 0 )
  {
    v14 = Object;
    if ( (*((_DWORD *)Object + 429) & 1) != 0 && !a5 )
    {
      if ( (unsigned int)KeKvaShadowingActive() )
      {
        *((_BYTE *)v14 + 640) = 1;
        v15 = _interlockedbittestandset((volatile signed __int32 *)v14 + 429, 0xBu);
        v14 = Object;
        if ( !v15 )
        {
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v23);
          MmSynchronizeAddressPolicy((struct _KPROCESS *)v14);
          KiUnstackDetachProcess((struct _KTHREAD *)v23, 0);
        }
      }
    }
    memset(v22, 0, sizeof(v22));
    v22[388] = 0;
    if ( v19 )
      v10 = 3;
    inserted = PspInsertProcess((char *)v14, (__int64)a1, 0x2000000, v12, 0LL, v10, 0LL, (__int64)v22);
    if ( inserted >= 0 )
    {
      DbgkCreateMinimalProcess(v14);
      *(_DWORD *)&v22[384] |= 0x200u;
      inserted = PspCreateObjectHandle(v14, (__int64)v22, (struct _OBJECT_TYPE *)PsProcessType);
      if ( inserted >= 0 )
        *v21 = *(_QWORD *)&v22[392];
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v22);
      if ( inserted < 0 )
        PsTerminateProcess((__int64)v14, inserted);
    }
    else
    {
      PspRundownSingleProcess((ULONG_PTR)v14, 0LL, v16, v17);
    }
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
  }
  if ( !v11 )
    ObfDereferenceObject(v7);
  return (unsigned int)inserted;
}
