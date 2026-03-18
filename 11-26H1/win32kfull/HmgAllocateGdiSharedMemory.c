/*
 * XREFs of HmgAllocateGdiSharedMemory @ 0x140258390
 * Callers:
 *     <none>
 * Callees:
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x14021164C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 */

__int64 HmgAllocateGdiSharedMemory()
{
  unsigned int v0; // ebx
  Gre::Base *v1; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-20h]
  __int64 v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h]
  __int64 v11; // [rsp+70h] [rbp+10h] BYREF
  union _LARGE_INTEGER v12; // [rsp+78h] [rbp+18h] BYREF

  v0 = 0;
  v12.QuadPart = 1573528LL;
  Gre::SectionObj::SectionObj((Gre::SectionObj *)&v11, 0LL, &v12, 1, 0LL);
  if ( v11 )
  {
    v3 = Gre::Base::Globals(v1);
    v6 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
    v9 = 0LL;
    v10 = 6;
    if ( (unsigned __int8)Gre::MapViewOfSectionObj::Map((__int64)&v6, v11, 3LL, 0LL) )
    {
      v4 = v11;
      v11 = 0LL;
      *((_QWORD *)v3 + 284) = v4;
      v5 = v8;
      v8 = 0LL;
      v6 = 0LL;
      v7 = 0LL;
      v9 = 0LL;
      v0 = 1;
      v10 = 6;
      *((_QWORD *)v3 + 232) = v5;
    }
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v6);
    Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v11);
    return v0;
  }
  else
  {
    Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v11);
    return 0LL;
  }
}
